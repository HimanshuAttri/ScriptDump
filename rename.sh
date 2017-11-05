IFS="\n"
for file in *.jpg;
do
    mv "$file" "${file//[[:space:]]}"
done
