sudo rm /var/lib/apt/lists/lock
sudo rm /var/cache/apt/archives/lock
cd /var/lib/dpkg/updates
sudo rm *
sudo apt-get update
