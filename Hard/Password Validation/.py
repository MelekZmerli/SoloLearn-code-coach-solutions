def filter_numbers(char):
  if char in ['1','2','3','4','5','6','7','8','9']:
    return True
  else:
    return False

def filter_symbols(char):
  if char in ['!','@','#','$','%','&','*']:
    return True
  else:
    return False

test = True
password = input()
if len(password) < 7:
  test = False
len_numbers = len(list(filter(filter_numbers,password)))
len_symbols = len(list(filter(filter_symbols,password)))

if (len_symbols < 2) or (len_numbers < 2):
  test = False
if test == True:
  print("Strong")
else:
  print("Weak")
    
