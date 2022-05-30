msg = gets
words = msg.split()
pig = ''
for word in words do
  pig += word[1..-1] + word[0] +'ay '
end
print pig
