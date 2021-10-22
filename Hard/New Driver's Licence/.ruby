user = gets
agents = gets.chomp.to_i
others = gets
l = others.split(' ')
l.append(user)
l.sort()
time = (l.index(user)/agents)to_i*20 + 20
print time
