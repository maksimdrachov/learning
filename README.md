# Learning

## General

- [Linux SysOps Handbook](https://abarrak.gitbook.io/linux-sysops-handbook)
  - [Learn X in Y minutes (bash)](https://learnxinyminutes.com/docs/bash/)
  - [The Fundamentals of Networking](https://www.ibm.com/cloud/learn/networking-a-complete-guide)
  - [Network protocol definition](https://www.cloudflare.com/learning/network-layer/what-is-a-protocol/)

- [Learn X in Y minutes](https://learnxinyminutes.com/)
  - [Docker](https://learnxinyminutes.com/docs/docker/)
    - Install procedure:
      - [Install instructions](https://docs.docker.com/engine/install/ubuntu/)
      - ["Package docker-ce has no installation candidate"](https://askubuntu.com/questions/1030179/package-docker-ce-has-no-installation-candidate-in-18-04)
      - [Permission denied](https://www.digitalocean.com/community/questions/how-to-fix-docker-got-permission-denied-while-trying-to-connect-to-the-docker-daemon-socket)

- SSH
  - [SSH connection refused](https://phoenixnap.com/kb/ssh-connection-refused)
  - [How to use SSH](https://phoenixnap.com/kb/ssh-to-connect-to-remote-server-linux-or-windows#htoc-how-to-install-an-openssh-server)

- Google Tech Dev Guid
  - [Data Structures & Algorithms](https://techdevguide.withgoogle.com/paths/data-structures-and-algorithms/)

- [GeeksforGeeks](https://www.geeksforgeeks.org/)
  - [Binary Search Tree](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)
  - [Count set bits in an integer](https://www.geeksforgeeks.org/count-set-bits-in-an-integer/)

- [Visual Studio Code Blogs](https://code.visualstudio.com/blogs/2022/04/04/increase-productivity-with-containers)
  - [Increase productivity with containers](https://code.visualstudio.com/blogs/2022/04/04/increase-productivity-with-containers)
  - [Developing inside a Container](https://code.visualstudio.com/docs/remote/containers)

- [Atlassian: Git](https://www.atlassian.com/git/tutorials/what-is-version-control)

- [Agile workflow](https://www.atlassian.com/agile/project-management/workflow)

- [Kubernetes vs Docker](https://www.atlassian.com/microservices/microservices-architecture/kubernetes-vs-docker)

## Bitcoin

- Bitcoin
  - [Bitcoin Core](https://github.com/bitcoin/bitcoin) (Bitcoin full node in C/Python)
    - [A complete beginners guide to installing a Bitcoin Full node on Linux (2018)](https://hackernoon.com/a-complete-beginners-guide-to-installing-a-bitcoin-full-node-on-linux-2018-edition-cb8e384479ea)
  - [btcd](https://github.com/btcsuite/btcd) (Bitcoin full node in Go)
  - [Bitcoin Dev Kit](https://bitcoindevkit.org/)

- Lightning implementations ([comparison article](https://medium.com/@fulgur.ventures/an-overview-of-lightning-network-implementations-d670255a6cfa)):
  - c-lightning (in C)
  - Eclair (Scala)
  - lnd (in Go) -> most popular
  - Rust-Lightning and LDK
  - Electrum
  - LNP Node
  - [Lightning Dev Kit](https://lightningdevkit.org/)

- Lightning node setup
  - [Umbrel OS](https://github.com/getumbrel/umbrel-os)
  - [Raspiblitz](https://github.com/rootzoll/raspiblitz)

Lightning frameworks:
- [Lnurl](https://github.com/fiatjaf/lnurl-rfc)
- [Lnbits](https://github.com/lnbits/lnbits-legend)

- Hardware wallets (firmware)
  - HWallet: simple cryptocurrency hardware wallet ([github](https://conference.hitb.org/hitbsecconf2018dxb/materials/D2%20COMMSEC%20-%20HWallet%20-%20The%20Simple%20Cryptocurrency%20Hardware%20Wallet%20-%20Nemanja%20Nikodijevic.pdf))
  - [Foundation Passport Firmware](https://github.com/Foundation-Devices/passport-firmware)

- Learning
  - [Lightning Labs (Builder's Guide)](https://docs.lightning.engineering/)
    - [Resource List](https://docs.lightning.engineering/community-resources/resource-list)
    - [Lightning Bulb](https://docs.lightning.engineering/community-resources/lightning-bulb)

## Networking

- Network analysis
  - [Network diagnostics with mtr](https://raduzaharia.medium.com/network-diagnostics-with-mtr-fd3305c076d6)
  - [Monitoring network connections with ss](https://raduzaharia.medium.com/monitoring-network-connections-with-ss-ee136ecab852)
  - [Measuring network speed with iperf3](https://raduzaharia.medium.com/measuring-network-speed-with-iperf3-e39e6cc05f58)
  - [How to monitor IP changes using cron or a systemd timer](https://raduzaharia.medium.com/how-to-monitor-ip-changes-using-cron-or-a-systemd-timer-3fbd957dd6b?source=list-dd3113a3df9e--------5-------7a9077df7f49---------------------)
  
- Home networking
  - [Backup strategies for a typical home network](https://raduzaharia.medium.com/backup-strategies-for-a-typical-home-network-d4ea443733d2)
  - [How to setup a media server on your Raspberry Pi](https://raduzaharia.medium.com/how-to-setup-a-media-server-on-your-raspberry-pi-8261016515b0)
  - [The struggle for personal networking](https://raduzaharia.medium.com/the-struggle-for-personal-networking-3fb94b54dfd3)
  - [From the cloud to the home NAS](https://raduzaharia.medium.com/from-the-cloud-to-a-home-nas-edc609af2679)
  - [Building a Raspberry Pi home server](https://raduzaharia.medium.com/building-a-raspberry-pi-home-server-9cab1ba7ab57?source=list-dd3113a3df9e--------10-------0ecf43751f74---------------------)
  - [Initial Fedore Server 35 configuration on a Raspberry Pi](https://raduzaharia.medium.com/initial-fedora-server-35-configuration-on-a-raspberry-pi-d317d462e2e8)
  - [Adding an external SSD to you Fedore Server on a Raspberry Pi](https://raduzaharia.medium.com/adding-an-external-ssd-to-your-fedora-server-on-a-raspberry-pi-e60daaba438b)
  - [Enabling more services on your Raspberry Pi](https://raduzaharia.medium.com/adding-an-external-ssd-to-your-fedora-server-on-a-raspberry-pi-e60daaba438b)
  - [Thoughts on NFS file sharing](https://raduzaharia.medium.com/thoughts-on-nfs-file-sharing-d1b6d3c22a9)
  - [Managing user identities in a network](https://raduzaharia.medium.com/managing-user-identities-in-a-network-703094e4835a)
  - [Practical security for the home network](https://raduzaharia.medium.com/practical-security-for-the-home-network-5732d5ae1b86)
  - [Setting up WireGuard on your Raspberry Pi](https://raduzaharia.medium.com/setting-up-wireguard-on-your-raspberry-pi-103f6db074f3)
  - [Raspberry Pi - WiFi Access Point](https://medium.com/@daltonmblack/raspberry-pi-wifi-access-point-9a6884e4a361)
  - [OpenWRT Raspberry Pi Docker & VLAN Project](https://paul-mackinnon.medium.com/openwrt-raspberry-pi-docker-vlan-project-9cb1db10684c)
  - [Raspberry Pi VPN Router](https://muokicaleb.medium.com/raspberry-pi-vpn-router-cb9722affb1)


## Linux
 
- Linux administration
  - [Making sense of the Linux logs](https://raduzaharia.medium.com/making-sense-of-the-linux-logs-e3898093d7f5)
  - [How to automate log scanning with fail2ban](https://raduzaharia.medium.com/how-to-automate-log-scanning-with-fail2ban-a8771460da3f)
  - [Mounting drives or shares in Linux](https://raduzaharia.medium.com/mounting-drives-or-shares-in-linux-b92c9a97af75)
  - [What are Linux signals and how do they work?](https://raduzaharia.medium.com/what-are-linux-signals-and-how-do-they-work-a008f68faed1?source=list-dd3113a3df9e--------6-------7a9077df7f49---------------------)
  - [How to exit a Linux terminal while keeping long tasks running](https://raduzaharia.medium.com/how-to-exit-a-linux-terminal-while-keeping-long-tasks-running-fdf74189ea8f)
  - [How to get information about your hardware devices in Linux](https://raduzaharia.medium.com/how-to-get-information-about-your-hardware-devices-in-linux-2307ccf4fb5c)
  - [Sending files to trash from the Linux terminal](https://raduzaharia.medium.com/sending-files-to-trash-from-the-linux-terminal-a620222213f7)
  - [DNF history and rollback](https://raduzaharia.medium.com/dnf-history-and-rollback-ae47f0d55e57)