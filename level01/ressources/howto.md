TermA:
```
scp -P 4242 level01@localhost:/etc/passwd .
podman cp passwd kalibox:/root/
```

TermB:
```
podman run -it --name kalibox kalilinux/kali-rolling
apt-get update && apt-get install -y john
john passwd
```
