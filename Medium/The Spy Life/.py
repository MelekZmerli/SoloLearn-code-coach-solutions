import string
msg = input()
l = list(string.ascii_lowercase)
l.append(' ')
msg = msg[::-1]
newin = ''
for c in msg:
  if c in l:
    newin+=c
print(newin)
