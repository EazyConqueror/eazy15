proxies:
  - name: mr.loby.ml3
    server: ge1.kitu.xyz
    port: 443
    type: vmess
    uuid: 962dbce1-5d62-415a-95f2-48847fdf67ad
    cipher: auto
    tls: true
    skip-cert-verify: true
    servername: ge1.kitu.xyz
    network: ws
    ws-opts:
      path: /xvless/
      headers:
        Host: ge1.kitu.xyz
    udp: true
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
  - MATCH,mrloby
