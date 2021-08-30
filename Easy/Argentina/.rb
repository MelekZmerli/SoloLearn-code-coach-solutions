pesos = gets.chomp.to_i
dollars = gets.chomp.to_i
pesos = pesos*2/100
if pesos<dollars
  print "Pesos"
else
  print "Dollars"
end
