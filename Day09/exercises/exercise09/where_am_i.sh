if cat $1 | grep -q "inet "; then
	cut -f2 | sed 's/inet //' | cut -d " " -f1
else
	echo "Je suis perdu!\n"
fi
