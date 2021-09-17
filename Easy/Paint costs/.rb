paint = gets.chomp.to_f
paint = paint*5+40
print paint.ceil().to_i+(paint/10).ceil().to_i
