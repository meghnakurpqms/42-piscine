cat /etc/passwd | grep -v # | sed -n "n;p" | rev | sort -r| awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2"| tr "\n" "," | sed "s/,$/./"
