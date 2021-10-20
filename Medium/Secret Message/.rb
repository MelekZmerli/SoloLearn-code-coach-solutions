alpha = ('a'..'z').to_a
ra = alpha.reverse()
msg = gets.downcase
res = ""
msg.split('').each{ |w|
  if alpha.find_index(w)
    res += ra[alpha.find_index(w)]
  else
    res += ' '
  end
}
puts res
