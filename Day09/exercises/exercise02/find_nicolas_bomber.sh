cat $1 | grep -i "^Nicolas	bomber" | rev | cut -f 2 | rev
cat $1 | grep -i "^Nicolas bomber" | rev | cut -f 2 | rev
