g++ $1 -o a.out
time ./a.out < $2 -v  ;
cat in.out
