We see a lua script checking a password, but sending nothing even in case of success...
Trying to run the script, we see that the address is already used.
indeed, nc into that address prompts us for a password:
```
nc 127.0.0.1 5151
```

the script show that is eval whatever string we send directly... seems unwise :
```
hello; getflag > /tmp/yes; echo hello
cat /tmp/yes
```
