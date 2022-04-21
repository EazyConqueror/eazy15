proxies:
  - {name: mr.loby.ml3, server: 15.185.233.7, port: 43401, type: ss, cipher: chacha20-ietf-poly1305, password: 1ghPZBQOY6vJ}    
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
