yrds = gets.chomp.to_i
if yrds > 10
  print "High Five"
elsif yrds >=1
  i=0
  while i < yrds
    print "Ra!"
    i+=1
  end
else
  print "shh"
end
