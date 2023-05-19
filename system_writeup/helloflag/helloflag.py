from pwn import *

context.log_level = 'debug'
p = remote("101.79.9.58", 10001)
p.recvuntil("Input :")

payload = str("1")
p.sendline(payload)

p.interactive()
