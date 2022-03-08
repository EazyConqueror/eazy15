dns:
  enable: true
  ipv6: false
  enhanced-mode: redir-host
  listen: 127.0.0.1:7874
  default-nameserver:
  - 114.114.114.114
  - 119.29.29.29
  - 8.8.8.8
  - 8.8.4.4
  - 1.1.1.1
  - 1.0.0.1
  nameserver:
  - 114.114.114.114
  - 119.29.29.29
  - 8.8.8.8
  - 8.8.4.4
  - 1.1.1.1
  - 1.0.0.1
  fallback:
  - https://cloudflare-dns.com/dns-query
  - https://dns.google/dns-query
  - https://1.1.1.1/dns-query
  - tls://8.8.8.8:853
  - tls://dns.rubyfish.cn:853
  - https://1.1.1.1/dns-query
  fallback-filter:
    geoip: true
    ipcidr:
    - 0.0.0.0/8
    - 10.0.0.0/8
    - 100.64.0.0/10
    - 127.0.0.0/8
    - 169.254.0.0/16
    - 172.16.0.0/12
    - 192.0.0.0/24
    - 192.0.2.0/24
    - 192.88.99.0/24
    - 192.168.0.0/16
    - 198.18.0.0/15
    - 198.51.100.0/24
    - 203.0.113.0/24
    - 224.0.0.0/4
    - 240.0.0.0/4
    - 255.255.255.255/32
    domain:
    - "+.google.com"
    - "+.facebook.com"
    - "+.youtube.com"
    - "+.githubusercontent.com"
  fake-ip-filter:
  - "*.lan"
  - time.windows.com
  - time.nist.gov
  - time.apple.com
  - time.asia.apple.com
  - "*.ntp.org.cn"
  - "*.openwrt.pool.ntp.org"
  - time1.cloud.tencent.com
  - time.ustc.edu.cn
  - pool.ntp.org
  - ntp.ubuntu.com
  - ntp.aliyun.com
  - ntp1.aliyun.com
  - ntp2.aliyun.com
  - ntp3.aliyun.com
  - ntp4.aliyun.com
  - ntp5.aliyun.com
  - ntp6.aliyun.com
  - ntp7.aliyun.com
  - time1.aliyun.com
  - time2.aliyun.com
  - time3.aliyun.com
  - time4.aliyun.com
  - time5.aliyun.com
  - time6.aliyun.com
  - time7.aliyun.com
  - "*.time.edu.cn"
  - time1.apple.com
  - time2.apple.com
  - time3.apple.com
  - time4.apple.com
  - time5.apple.com
  - time6.apple.com
  - time7.apple.com
  - time1.google.com
  - time2.google.com
  - time3.google.com
  - time4.google.com
  - music.163.com
  - "*.music.163.com"
  - "*.126.net"
  - musicapi.taihe.com
  - music.taihe.com
  - songsearch.kugou.com
  - trackercdn.kugou.com
  - "*.kuwo.cn"
  - api-jooxtt.sanook.com
  - api.joox.com
  - joox.com
  - y.qq.com
  - "*.y.qq.com"
  - streamoc.music.tc.qq.com
  - mobileoc.music.tc.qq.com
  - isure.stream.qqmusic.qq.com
  - dl.stream.qqmusic.qq.com
  - aqqmusic.tc.qq.com
  - amobile.music.tc.qq.com
  - "*.xiami.com"
  - "*.music.migu.cn"
  - music.migu.cn
  - "*.msftconnecttest.com"
  - "*.msftncsi.com"
  - localhost.ptlogin2.qq.com
  - "+.srv.nintendo.net"
  - "+.stun.playstation.net"
  - xbox.*.microsoft.com
  - "+.xboxlive.com"
  - proxy.golang.org
  - stun.*.*
  - stun.*.*.*
  - heartbeat.belkin.com
  - "*.linksys.com"
  - "*.linksyssmartwifi.com"
  - "+.battlenet.com.cn"
proxies:
  - {name: mr.loby.ml3, server: 142.93.168.188, port: 21612, udp: true, type: ss, cipher: chacha20-ietf-poly1305, password: zUOC2CcSPiEX}    
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
  - DOMAIN,euspeed.igamecj.com,mrloby
  - MATCH,DIRECT
