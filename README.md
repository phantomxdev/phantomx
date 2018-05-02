# PhantomX - PNX

PhantomX is a secure project aims to integrate cryptocurrencies in a real environment.


### Why invest in PhaNtomX

> **SUPER FAST TRANSACTIONS:** Instant payments and quick confirmation. Much faster than Bitcoin. Your payments will be processed anywhere in the world at any time, as quickly as possible. The speed of payment, which is the distinctive advantage of a PhantomX. All transactions are stored in a unit of cost and can be accessed by any user at any time.

> **SECURITY & ANONYMOUS:** With the built-in encryption of the wallet, you can safely store your PhantomX on your equipment. We are providing an online wallet soon as possible. Transactions are completely anonymous using darksend.

> **GROWING COMMUNITY:** PhantomX has a growing and friendly community. We have many plans and developments for the introduction of the coin into real life. We are open for cooperation and everyone can participate and contribute to the improvement of the dissemination PhantomX.



### Technical details

 **System Protocol:** Proof-of-Work and Proof-of-Stake<br>
 **Hash Algorithm:** X11<br>
 **Currency symbols:** PNX<br>
 **Market Cap:** 50 millions<br>
 **Block Time:** 120 seconds<br>
 **Masternode Collateral:** 20.000 PNX<br>
 **Masternode Rewards:** 50% from PoS<br>

### How to use PNX wallet

> Windows System must to use compiled Windows wallet version from "release" github tab (has graphical interface). Users only need to run the downloaded ".exe" file and start using our wallet

> Linux System, has two method for run PNX wallet, using a graphical interface like on Windows version by downloading the suitable version from "release" github tab or by compiling the wallet and using without graphical interface, that option needs to compile the wallet but it's the recommended one for VPS staking and Masternodes which need to run 24/7 h.
To compile the wallet we can choose between two method, the first "Method 1" is a autoinstall script that will compile the wallet for you and make a fast sync to the pnx blockchain. The second one called as "Method 2" consist of enter command by command on a terminal prompt


 ### **Method 1.) Install the PNX wallet using the autoinstall script (Ubuntu/Debian/Raspberry)**

 USE THIS SCRIPT ON FRESH SYSTEM INSTALL !

 Connect to your system using SSH & execute the following commands

     cd ~
     wget https://raw.githubusercontent.com/phantomxdev/phantomx/master/autoinstall/install-pnx-wallet.sh
     sudo chmod +x install-pnx-wallet.sh
     ./install-pnx-wallet.sh

 Now the script will auto start to compile and to download the latest blockchain



 ### To run the wallet & other useful info:

 To run the wallet as daemon (once you execute this command you can close the terminal and the wallet will continue working)

     /wallets/phantomx/phantomxd  -datadir=/wallets/phantomx/wallet -daemon -start

 To stop the wallet (previous started)

     /wallets/phantomx/phantomxd  -datadir=/wallets/phantomx/wallet stop

 To get actual info from the running pnx wallet

     /wallets/phantomx/phantomxd  -datadir=/wallets/phantomx/wallet getinfo


 ### A video tutorial using that autoinstall script can be watched at:

     TUTO Youtube : https://youtu.be/4oo4CqRBMh8


### **Method 2.) Install PNX wallet from a terminal prompt**

First of all we need to install PNX Wallet, so install prerequisites:

    sudo apt-get -y update
    sudo apt-get upgrade
    sudo apt-get dist-upgrade

    sudo apt-get install git
    sudo apt-get install dnsutils unzip
    sudo apt-get install build-essential libssl-dev libboost-all-dev git libdb5.3++-dev libminiupnpc-dev screen autoconf

    sudo mkdir /wallets
    sudo chmod 777 /wallets

    #If you have less than 2GB ram on your VPS or PC you must to create
    #a swap file to avoid errors during compile step
    #(ONLY RUN THIS COMMANDS IF YOU HAVE LESS THAN 2GB RAM)
    sudo /bin/dd if=/dev/zero of=/var/swap.1 bs=1M count=2048
    sudo /sbin/mkswap /var/swap.1
    sudo chmod 600 /var/swap.1
    sudo /sbin/swapon /var/swap.1

Eddit /etc/fstab
(ONLY RUN THIS COMMAND IF YOU HAVE LESS THAN 2GB RAM)

    sudo nano /etc/fstab

Add the line above on the end of /etc/fstab:
(ONLY RUN THIS COMMAND IF YOU HAVE LESS THAN 2GB RAM)

    /var/swap.1 swap swap defaults 0 0


Compile the PNX wallet

    cd /wallets
    git clone https://github.com/phantomxdev/phantomx.git

    -->> Level DB
    cd /wallets/phantomx/src/leveldb
    chmod +x build_detect_platform
    make libleveldb.a libmemenv.a

    -->> SECP 256
    cd /wallets/phantomx/src/secp256k1
    chmod +x autogen.sh
    ./autogen.sh
    ./configure
    make

    -->> WALLET
    cd /wallets/phantomx/src
    sudo make -f makefile.unix
      or
    sudo make -f makefile.unix "USE_UPNP=-" # without support to UPNP


Copy the compiled file to a known folder

    cd /wallets
    cp /wallets/phantomx/src/phantomxd /wallets/phantomx/

Creating  pnx init file

    mkdir /wallets/phantomx/wallet
    nano /wallets/phantomx/wallet/phantomx.conf

Add theses commands to phantomx.conf makefile

    rpcallowip=127.0.0.1
    rpcuser=user
    rpcpassword=password
    listen=1
    server=1
    rpcport=3000
    txindex=1
    maxconnections=500
    addnode=54.218.118.59:9340
    addnode=54.218.118.59:9341

Get the latest blockchain to do a fast Sync

    cd /wallets/
    wget http://phantomx.co/download/latest-blockchain.zip
    sudo unzip /wallets/latest-blockchain.zip
    sudo cp -R /wallets/wallets/latest-blockchain/database /wallets/phantomx/wallet
    sudo cp -R /wallets/wallets/latest-blockchain/txleveldb /wallets/phantomx/wallet
    sudo cp  /wallets/wallets/latest-blockchain/peers.dat /wallets/phantomx/wallet/peers.dat
    sudo cp  /wallets/wallets/latest-blockchain/blk0001.dat /wallets/phantomx/wallet/blk0001.dat
    sudo rm -r /wallets/latest-blockchain.zip
    sudo rm -r /wallets/wallets


Start the wallet

    /wallets/phantomx/phantomxd -datadir=/wallets/phantomx/wallet -daemon -txindex



### Technical guides for more detail

 **Masternode on Windows:** https://phantomx.co/guide/how-to-create-masternode-windows<br>
 **Masternode on Linux:** https://phantomx.co/guide/how-to-create-masternode-linux<br>
 **Updating blockchain:** https://phantomx.co/guide/how-to-update-blockchain



### Contacts
 **Website:** https://www.phantomx.co<br>
 **Telegram:** https://t.me/joinchat/GuzdQUN9fdpX3fSJ4bqWTQ<br>
 **Discord:** https://discord.gg/JU7jwZX<br>
 **Twitter:** https://twitter.com/PhantomX_Coin<br>
 **ANN BitCoinTalk:** https://bitcointalk.org/index.php?topic=2251352.msg22765424.0
