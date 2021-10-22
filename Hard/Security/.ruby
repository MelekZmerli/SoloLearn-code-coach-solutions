NewFloor = gets.tr('x','')
for i in 1...NewFloor.length do
  if((NewFloor[i-1] =='$' and NewFloor[i] =='T') or(NewFloor[i-1] =='T' and NewFloor[i] == '$'))
    print 'ALARM'
    exit()
  end
end
print 'quiet'
