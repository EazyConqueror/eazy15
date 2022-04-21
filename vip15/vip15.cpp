proxies:
  - name: "trojan"
    type: trojan
    server: s.eazyconqueror.tk
    port: 8443
    password: e0c01fa9-d850-4d56-bdae-26b176d8a62c
    alpn:
      - h2
      - http/1.1
    skip-cert-verify: true

  - name: mr.loby.ml2
    type: ss
    server: 207.154.225.199
    port: 26046
    udp: true
    skip-cert-verify: true
    cipher: chacha20-ietf-poly1305
    password: IF1lnUjSbNSH
    
  - name: "vmess"
    type: vmess
    server: s.eazyconqueror.tk
    port: 95
    uuid: 2c3f045e-0e6e-46d6-9ac3-14f9e7ae7b43
    alterId: 0
    cipher: auto
    udp: true
    skip-cert-verify: true
    network: ws
    ws-opts:
      path: /v2rayws
      headers:
        Host: s.eazyconqueror.tk
    
  - name: "vmess-grpc"
    server: s.eazyconqueror.tk
    port: 2099
    type: vmess
    uuid: 915f0174-c048-4693-911e-ee21aed181b3
    alterId: 0
    cipher: auto
    network: grpc
    tls: true
    servername: s.eazyconqueror.tk
    udp: true
    skip-cert-verify: true
    grpc-opts:
      grpc-service-name: "scvps"
      
  - name: "ssr"
    type: ssr
    server: 207.154.225.199
    port: 1444
    udp: true
    cipher: aes-256-cfb
    password: vip4
    obfs: tls1.2_ticket_auth
    protocol: auth_chain_a
    # obfs-param: domain.tld
    # protocol-param: "#"
    # udp: true
proxy-groups:
  - name: gameTROJAN
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - mr.loby.ml2
  - name: gameWS
    type: select
    proxies:
      - "ssr"
  - name: gameGRPC
    type: select
    proxies:
      - "vmess-grpc"
  - name: gameSSR
    type: select
    proxies:
      - "ssr"
  - name: gameDIR
    type: select
    proxies:
      - DIRECT
rules:
  - DOMAIN,www.pubgmobile.com,gameTROJAN
  - DOMAIN,dl.listdl.com,gameTROJAN
  - DOMAIN,crl3.digicert.com,gameTROJAN
  - DOMAIN,www.microvirt.com,gameTROJAN
  - DOMAIN,android-safebrowsing.google.com,gameTROJAN
  - DOMAIN,app-measurement.com,gameTROJAN
  - DOMAIN,lh3.googleusercontent.com,gameTROJAN
  - DOMAIN,android.crashsight.wetest.net,gameTROJAN
  - DOMAIN-SUFFIX,gstatic.com,gameTROJAN
  - DOMAIN-SUFFIX,gcloudcs.com,gameTROJAN
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTROJAN
  - DOMAIN-SUFFIX,proximabeta.com,gameTROJAN
  - DOMAIN-SUFFIX,twimg.com,gameTROJAN
  - DOMAIN-SUFFIX,fbsbx.com,gameTROJAN
  - DOMAIN,graph.facebook.com,gameTROJAN
  - DOMAIN-SUFFIX,adjust.com,gameTROJAN
  - DOMAIN-SUFFIX,amsoveasea.com,gameTROJAN
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTROJAN
  - DOMAIN-SUFFIX,gjacky.com,gameTROJAN
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTROJAN
  - DOMAIN-SUFFIX,onezapp.com,gameTROJAN
  - DOMAIN-SUFFIX,qcloud.com,gameTROJAN
  - DOMAIN-SUFFIX,doubleclick.com,gameTROJAN
  - DOMAIN-SUFFIX,googleapis.com,gameTROJAN
  - DOMAIN-SUFFIX,gvt1.com,gameTROJAN
  - IP-CIDR,129.226.2.165/24,gameTROJAN
  - GEOIP,CN,gameTROJAN
  - DOMAIN-SUFFIX,igamecj.com,gameGRPC
  - DOMAIN-SUFFIX,qq.com,gameGRPC
  - DOMAIN-SUFFIX,gcloudcs.com,gameGRPC
  - DST-PORT,20001,gameGRPC
  - DST-PORT,20000,gameGRPC
  - DST-PORT,20002,gameGRPC
  - IP-CIDR,203.205.239.243/24,gameGRPC
  - IP-CIDR,162.0.0.0/8,gameWS
  - IP-CIDR,49.0.0.0/8,gameWS
  - IP-CIDR,20.0.0.0/8,gameWS
  - MATCH,DIRECT
