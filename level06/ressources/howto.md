`level06 level06.php` show some shenanigans
Notice /e in regex -> string will get evaluated
Specifically, stuff in syntax `[x stuff]` will match and get evaluated.
Copy the exploit and run level06 with it and the command you want as argument (command will be $z)
(test with whoami confirm setuid suspicion)
```
scp -P 4242 exploit level06@localhost:/tmp/
./level06 /tmp/exploit getflag

