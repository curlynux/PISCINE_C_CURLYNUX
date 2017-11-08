ldapsearch -xLLL "uid=z*" cn | grep -e cn: | sort -r | cut -c 5-
