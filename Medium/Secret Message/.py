import string
msg = input()
msg = msg.lower()
a = list(string.ascii_lowercase)
ra = a[::-1]
code = ""
for c in msg:
  if c != ' ':
    code += ra[a.index(c)]
  else:
    code += ' '
print(code)
