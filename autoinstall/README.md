# PhantomX wallet Auto-Install Script

Website: http://phantomx.co

Telegram Group: https://t.me/joinchat/GuzdQUN9fdpX3fSJ4bqWTQ

TUTO Youtube : https://youtu.be/4oo4CqRBMh8

***********************************



## Prerequisites

- Ubuntu 16.04 or Debian or Raspbian (Raspberry Pi)
- Root access
- Network Connection

## Tested on

- Ubuntu 16.04
- Debian
- Raspberry Pi 2 (Raspbian Stretch Lite)
- Raspberry Pi 3 (Raspbian Stretch Lite)


### Install script to get PNX wallet on Ubuntu 16.04

USE THIS SCRIPT ON FRESH SYSTEM INSTALL !

Connect to your System using SSH & execute the following commands

    cd ~
    wget https://raw.githubusercontent.com/PhantomxTeam/autoinstallpnx/master/autoinstallpnx.sh
    sudo chmod +x autoinstallpnx.sh
    ./autoinstallpnx.sh

Now the script will auto start to compile and to download the latest blockchain



### To run the wallet & other useful info:

To run the wallet as daemon (once you execute this command you can close the terminal and the wallet will continue working)

    /wallets/phantomx/phantomxd  -datadir=/wallets/phantomx/wallet -daemon -start

To stop the wallet (previous started)

    /wallets/phantomx/phantomxd  -datadir=/wallets/phantomx/wallet stop

To get actual info from the running pnx wallet

    /wallets/phantomx/phantomxd  -datadir=/wallets/phantomx/wallet getinfo


### Donate

If this helped you or you feel giving please donate :
 - PNX: PGkXignbZEK7g4e26ijk8JpnPnQUFL9xkj
 - BTC: 1ECGejiJb2yq2Q4aw9fko3SNguVLrXow5z
