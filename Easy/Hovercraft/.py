gain = int(input())
gain = gain*3-21
if(gain < 0):
  print("Loss")
elif(gain > 0):
  print("Profit")
else:
  print("Broke Even")
