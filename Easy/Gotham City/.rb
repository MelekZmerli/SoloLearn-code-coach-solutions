crimes = gets.chomp.to_i
if crimes < 5
  print "I got this!"
elsif crimes >= 5 && crimes < 10
  print "Help me Batman"
else
  print "Good Luck out there!"
end
