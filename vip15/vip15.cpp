proxies:
  - name: mr.loby.ml3
    server: su.eazyconqueror.tk
    port: 999
    type: vmess
    uuid: 31ed9de6-a77e-48ab-be52-5d42023ff446
    alterId: 0
    cipher: auto
    network: grpc
    tls: true
    servername: s.eazyconqueror.tk
    skip-cert-verify: true
    grpc-opts:
      grpc-service-name: "GunService"
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
