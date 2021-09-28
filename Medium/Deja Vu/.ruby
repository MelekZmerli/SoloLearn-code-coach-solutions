msg = gets
msg.each_char do |c|
  if msg.count(c) > 1
    print "Deja Vu"
    exit()
  end
end
print "Unique"
