
# PhantomX - PNX

PhantomX is a secure project aims to integrate cryptocurrencies in a real environment.


### Why invest in PhaNtomX

> **SUPER FAST TRANSACTIONS:** Instant payments and quick confirmation. Much faster than Bitcoin. Your payments will be processed anywhere in the world at any time, as quickly as possible. The speed of payment, which is the distinctive advantage of a PhantomX. All transactions are stored in a unit of cost and can be accessed by any user at any time.

> **SECURITY & ANONYMOUS:** With the built-in encryption of the wallet, you can safely store your PhantomX on your equipment. We are providing an online wallet soon as possible. Transactions are completely anonymous using darksend.

> **GROWING COMMUNITY:** PhantomX has a growing and friendly community. We have many plans and developments for the introduction of the coin into real life. We are open for cooperation and everyone can participate and contribute to the improvement of the dissemination PhantomX.



### Technical details

 **System Protocol:** Proof-of-Work and Proof-of-Stake
 **Hash Algorithm:** X11
 **Currency symbols:** PNX
 **Market Cap:** 50 millions
 **Block Time:** 120 seconds
 **Masternode Collateral:** 20.000 PNX
 **Masternode Rewards:** 50% from PoS



### How to install

Updating Ubuntu system
```sh
sudo apt-get update
sudo apt-get upgrade
sudo apt-get dist-upgrade
```

Installing new packages
```sh
sudo apt-get install -y build-essential libssl-dev libboost-all-dev git libdb5.3++-dev libminiupnpc-dev screen
```

Creating folder on root structure and give permission
```sh
sudo mkdir /wallets
sudo chmod 777 /wallets
```

Downloading source code
```sh
git clone https://github.com/phantomxdev/phantomx.git phantomx
cd phantomx
```

Changing permission to run
```sh
cd ./src/leveldb
chmod +x build_detect_platform
cd ../..
```

Compiling daemon
```sh
make -f makefile.unix
```


### Technical guides for more detail

 **Masternode on Windows:** https://phantomx.co/guide/how-to-create-masternode-windows
 **Masternode on Linux:** https://phantomx.co/guide/how-to-create-masternode-linux
 **Updating blockchain:** https://phantomx.co/guide/how-to-update-blockchain



### Contacts
 **Website:** https://www.phantomx.co
 **Telegram:** https://t.me/joinchat/GuzdQUN9fdpX3fSJ4bqWTQ
 **Discord:** https://discord.gg/JU7jwZX
 **Twitter:** https://twitter.com/PhantomX_Coin
 **ANN BitCoinTalk:** https://bitcointalk.org/index.php?topic=2251352.msg22765424.0

