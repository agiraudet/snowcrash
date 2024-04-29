Now there is no file or bin.
I know that getflag say to to reverse it, but meh
getflag check a few things against RE: check for LD_PRELOAD and lib hijacking, but we dont need that.
Then check debugging with ptrace, that is easy to go around
```
   0x08048989 <+67>:	call   0x8048540 <ptrace@plt>
=> 0x0804898e <+72>:	test   %eax,%eax
b *0x0804898e
c
set $eax = 0
c
```

Then it call getuid, and give the appropriate flag depending on it : (We can check the uids in /etc/passwd)
```
   0x08048afd <+439>:	call   0x80484b0 <getuid@plt>
   0x08048b02 <+444>:	mov    %eax,0x18(%esp)
b *0x08048b02
set $eax = 3014
c
```

This method actually allows to retrieve any flags...

