gain = gets.chomp.to_i
gain = gain*3-21
if(gain < 0)
  print "Loss"
elsif(gain > 0)
  print "Profit"
else
  print "Broke Even"
end
