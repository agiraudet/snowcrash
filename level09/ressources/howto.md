Gdb, strings strace insist on us not reversing the bin, no LD_PRELOAD, etc.
Run it, looks like its rotating each letter based on its index. Confirm :
```
./level09 aaaaaaaaaaaa
```

So we code the inverse of that, run it on token : looks like a flag, but fail.
```
file token
```
Tells us it's actually bin data.
So get its content as hex and try to rotate that:
```
xxd -i token
```
And that's it
