```
scp -P 4242 level02@localhost:~/level02.pcap .
chmod 666 level02.pcap
```
Open the file in wire shark
Right-clic > Folow TCP stream, we see a password
Print as hex, we see \x7f chars, aka backspace. Remove the correct number of char
