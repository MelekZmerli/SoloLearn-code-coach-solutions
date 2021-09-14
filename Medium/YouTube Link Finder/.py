link = input()
def count_dots(x):
  if x == '.':
    return True
  else:
    return False
num_dots = len(list(filter(count_dots.link)))
if num_dots == 2:
  new_link = link.split('=')[1]
else:
  new_link = link.split('/')[3]
print(new_link)
