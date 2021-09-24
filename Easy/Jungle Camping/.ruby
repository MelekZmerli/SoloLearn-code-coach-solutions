input = gets
sounds = input.split
out = ""
for s in sounds do
  case s
  when "Grr"
    out += "Lion"+' '
  when "Rawr"
    out += "Tiger"+' '
  when "Ssss"
    out += "Snake"+' '
  when "Chirp"
    out += "Bird"+' '
  end
end
print out
