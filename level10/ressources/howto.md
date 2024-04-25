open an other terminal to be ready to receive the data (we can see the port when trying to connect):
```
nc -l 127.0.0.1 6969
```



we see a probable call to access() when doing `strings level10`. So checking the user auth instead of the process one. 
we can bypass the call to access in gdb by putting a breakpoint to the test after it and fudging eax:
```
   0x0804874e <+122>:	test   %eax,%eax
b *0x0804874e
c
set $eax = 0
```
but we get stuck because gdb doesnt carry the setuid...
