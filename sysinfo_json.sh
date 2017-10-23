while :
do
sleep 3
echo "{\"uptime\":\""$(uptime)"\", \"cap\":\""$(cat /sys/class/power_supply/BAT1/capacity)"\", \"state\":\""$(cat /sys/class/power_supply/BAT1/status)"\", \"memt\":\""$(cat /proc/meminfo | grep MemTotal)"\", \"mema\":\""$(cat /proc/meminfo | grep MemAvailable)"\", \"buffer\":\""$(cat /proc/meminfo | grep Buffer)"\"}">s.json;
cat /proc/acpi/button/lid/LID0/state >sp.txt
done

