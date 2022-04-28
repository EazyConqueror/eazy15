proxies:   
  - name: "ssr1"
    type: ss
    server: 207.154.225.199
    port: 26046
    cipher: chacha20-ietf-poly1305
    password: IF1lnUjSbNSH

  - name: "ssr2"
    type: ssr
    server: 207.154.225.199
    port: 1445
    udp: true
    cipher: aes-256-cfb
    password: vip2
    obfs: tls1.2_ticket_auth
    protocol: auth_chain_a 
    # obfs-param: domain.tld
    # protocol-param: "#"
    # udp: true

proxy-groups:
  - name: gameTLS
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - "ssr1"
  - name: gameHTTP
    type: select
    proxies:
      - "ssr2"
  - name: gameDIR
    type: select
    proxies:
      - DIRECT
rules:
  - DOMAIN,www.pubgmobile.com,gameTLS
  - DOMAIN,dl.listdl.com,gameTLS
  - DOMAIN,crl3.digicert.com,gameTLS
  - DOMAIN,www.microvirt.com,gameTLS
  - DOMAIN,android-safebrowsing.google.com,gameTLS
  - DOMAIN,app-measurement.com,gameTLS
  - DOMAIN,lh3.googleusercontent.com,gameTLS
  - DOMAIN,android.crashsight.wetest.net,gameTLS
  - DOMAIN-SUFFIX,gstatic.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTLS
  - DOMAIN-SUFFIX,proximabeta.com,gameTLS
  - DOMAIN-SUFFIX,twimg.com,gameTLS
  - DOMAIN-SUFFIX,fbsbx.com,gameTLS
  - DOMAIN,graph.facebook.com,gameTLS
  - DOMAIN-SUFFIX,adjust.com,gameTLS
  - DOMAIN-SUFFIX,amsoveasea.com,gameTLS
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTLS
  - DOMAIN-SUFFIX,gjacky.com,gameTLS
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTLS
  - DOMAIN-SUFFIX,onezapp.com,gameTLS
  - DOMAIN-SUFFIX,qcloud.com,gameTLS
  - DOMAIN-SUFFIX,doubleclick.com,gameTLS
  - DOMAIN-SUFFIX,googleapis.com,gameTLS
  - DOMAIN-SUFFIX,gvt1.com,gameTLS
  - DOMAIN-SUFFIX,igamecj.com,gameTLS
  - DOMAIN-SUFFIX,qq.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - IP-CIDR,203.205.239.243/24,gameTLS
  - IP-CIDR,129.226.2.165/24,gameTLS
  - IP-CIDR,172.16.0.1/24,gameTLS
  - IP-CIDR,137.208.72.137/24,gameTLS
  - GEOIP,CN,gameTLS
  - IP-CIDR,162.0.0.0/8,gameHTTP
  - IP-CIDR,49.0.0.0/8,gameHTTP
  - IP-CIDR,20.0.0.0/8,gameHTTP
  - DST-PORT,20001,gameHTTP
  - DST-PORT,20000,gameHTTP
  - DST-PORT,20002,gameHTTP
  - MATCH,DIRECT
