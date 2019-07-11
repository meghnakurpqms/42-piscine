ifconfig | grep ether | grep -v ethernet |sed "s/ether//g"| tr -d '\t'
