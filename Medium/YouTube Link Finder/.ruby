link = gets
if link.count('.') == 2
  puts link[32,link.length]
else
  puts link[17,link.length]
end
