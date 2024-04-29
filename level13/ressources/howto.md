The program check the uid of the user against 4242, and prints the flag id.
Running the program with gdb, we b at the return of getuid() and set eax to 4242
```
   0x0804859a <+14>:	cmp    $0x1092,%eax
b *0x0804859a
set $eax = 4242
```
