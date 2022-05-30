msg = gets.tr('?!.,:','')
i = msg.split.size
if i == 0
  print i
else
  print (msg.length/i).ceil()
end
