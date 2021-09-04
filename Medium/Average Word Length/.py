import math 

ph = input()
np = ph.replace('.','')
np2 = np.replace(',','')
np3 = np2.replace(';','')
np4 = np3.replace(':','')
np5 = np4.replace('?','')
np6 = np5.replace('!','')

words = np6.split()

i = 0
sum = 0
for word in words:
  i += 1
  sum += len(word)
if i == 0:
  print(i)
else:
  sum/=i
  print(math.ceil(sum)) 
