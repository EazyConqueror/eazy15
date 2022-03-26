proxies:
  - name: mr.loby.ml3
    server: s.eazyconqueror.tk
    port: 2099
    type: vmess
    uuid: fbc08717-6420-464f-b562-e43caa06a70b
    alterId: 0
    cipher: auto
    network: grpc
    tls: true
    servername: s.eazyconqueror.tk
    skip-cert-verify: true
    grpc-opts:
      grpc-service-name: "scvps"
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
