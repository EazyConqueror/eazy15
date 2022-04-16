proxies:
  - name: mr.loby.ml3
    server: 15.185.233.7
    port: 43401
    type: ss
    cipher: chacha20-ietf-poly1305
    password: t3tcjh6LVgRg
    udp: true
proxy-groups:
  - name: mrloby
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - mr.loby.ml3
  - name: game
    type: select
    proxies:
      - DIRECT
rules:
  - DOMAIN,www.pubgmobile.com,mrloby
  - DOMAIN,dl.listdl.com,mrloby
  - DOMAIN,app-measurement.com,mrloby
  - DOMAIN,lh3.googleusercontent.com,mrloby
  - DOMAIN,android.crashsight.wetest.net,mrloby
  - DOMAIN-SUFFIX,gstatic.com,mrloby
  - DOMAIN-SUFFIX,gcloudcs.com,mrloby
  - DOMAIN-SUFFIX,sg.tdatamaster.com,mrloby
  - DOMAIN-SUFFIX,proximabeta.com,mrloby
  - DOMAIN-SUFFIX,twimg.com,mrloby
  - DOMAIN-SUFFIX,fbsbx.com,mrloby
  - DOMAIN-SUFFIX,facebook.com,mrloby
  - DOMAIN-SUFFIX,adjust.com,mrloby
  - DOMAIN-SUFFIX,amsoveasea.com,mrloby
  - DOMAIN-SUFFIX,gcloudsdk.com,mrloby
  - DOMAIN-SUFFIX,gjacky.com,mrloby
  - DOMAIN-SUFFIX,anticheatexpert.com,mrloby
  - DOMAIN-SUFFIX,onezapp.com,mrloby
  - DOMAIN-SUFFIX,qq.com,mrloby
  - DOMAIN-SUFFIX,qcloud.com,mrloby
  - DOMAIN-SUFFIX,doubleclick.com,mrloby
  - DOMAIN-SUFFIX,googleapis.com,mrloby
  - DST-PORT,9031,mrloby
  - IP-CIDR,203.205.239.243/32,mrloby
  - IP-CIDR,58.251.106.185/32,mrloby
  - GEOIP,CN,mrloby
  - DOMAIN,naping.igamecj.com,game
  - DOMAIN,saping.igamecj.com,game
  - DOMAIN,krping.igamecj.com,game
  - DOMAIN,hkping.igamecj.com,game
  - DOMAIN,meping.igamecj.com,game
  - DOMAIN,euping.igamecj.com,game
  - DOMAIN-SUFFIX,igamecj.com,mrloby
  - IP-CIDR,162.0.0.0/8,game
  - IP-CIDR,49.0.0.0/8,game
  - IP-CIDR,20.0.0.0/8,game
  - MATCH,DIRECT
