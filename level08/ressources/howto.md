objdump -d level08 show a str compare. 
disas show comparaison against "token", which can also be seen when using strings.
We cant rename the file, but we can create a link :
```
ln -s /home/user/level08/token /tmp/netok
./level08 /tmp/netok
```
We get the token to log as flag08.

Also the error string "You may not access 'token'" is a hint maybe
