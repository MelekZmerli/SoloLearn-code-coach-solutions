length = int(input())
sum = 0
while length:
    s = int(input())
    length -=1
    if s%2 ==0:
      sum += s
print(sum)
