password = gets
num = password.count('0123456789')
sym = password.count('!@#$/^&*\':;,?')
if(password.length > 7 && num > 1 && sym > 1)
    print "Strong"
else
    print "Weak"
end