self = input()
agents = int(input())
others = input()
l = others.split(' ')
l.append(self)
l.sort()
time = (int)(l.index(self)/agents)*20+20
print(time)
