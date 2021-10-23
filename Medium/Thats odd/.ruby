sum = 0
length = gets.to_i
for i in 1..length do
  s = gets.to_i
  if s%2 == 0
    sum +=s
  end
end
print sum
