d=$1;
f=$2;

gcc ${d}/${f}.c -o  ${d}/dustbin/${f}.exe

## bash run.sh day02 01