dns:
  enable: true
  ipv6: false
  enhanced-mode: redir-host
  listen: 0.0.0.0:7894
  fallback-filter:
    geoip: false
    ipcidr:
    - 240.0.0.0/4
  nameserver:
    - tls://94.140.14.14:853
    - tls://94.140.15.15:853
  fallback:
    - tcp://94.140.14.14
    - tcp://94.140.15.15
    - 94.140.14.14
    - 94.140.15.15
tun:
  enable: true
  stack: system 
  macOS-auto-route: true
  macOS-auto-detect-interface: true
  dns-hijack:
    - tcp://94.140.14.14:53
experimental:
  interface-name: en0
  
proxies:
  - {name: mr.loby.ml3, server: 142.93.168.188, port: 21612, type: ss, cipher: chacha20-ietf-poly1305, password: zUOC2CcSPiEX}    
proxy-groups:
  - name: mrloby
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
     - mr.loby.ml3
rules:
  - DOMAIN,mgl.lobby.igamecj.com,mrloby
  - DOMAIN,pay.igamecj.com,mrloby
  - DOMAIN,graph.facebook.com,mrloby
  - MATCH,DIRECT
