proxies:
  - name: ws
    type: vmess
    server: sau1.vpnjantit.com
    port: 10001
    uuid: c32bdd24-f362-11ee-947a-525401b3cc30
    alterId: 0
    cipher: auto
    #udp: true
    tls: true
    skip-cert-verify: true
    network: ws
    ws-opts:
      path: /vpnjantit
      headers:
        Host: google.com
proxy-groups:
  - name: gameTLS
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    proxies:
      - ws
rules:

  - MATCH,gameTLS
