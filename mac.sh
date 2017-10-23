
for i in $1
do
if($i=='-')
then

$i=':'
fi




done


curl 'http://api.macvendors.com/'$1
echo "  "  $1
