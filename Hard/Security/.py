Floor = input()
NewFloor = ''
test = True
for i in range(len(Floor)):
  if(Floor[i] == 'x'):
    continue
  NewFloor += Floor[i]

for i in range(1,len(NewFloor)):
  if(((NewFloor[i-1] == '$') and (NewFloor[i] == 'T')) or ((NewFloor[i-1] == 'T') and (NewFloor[i] == '$'))):
    print("ALARM")
    test = false
    break
if test == True:
  print("quiet")
