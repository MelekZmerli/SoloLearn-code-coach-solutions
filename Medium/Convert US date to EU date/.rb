d = gets
l = []
months = {"January"=> "1",
          "February"=> "2",
          "March"=> "3",
          "April"=> "4",
          "May"=> "5",
          "June"=> "6",
          "July"=> "7",
          "August"=> "8",
          "September"=> "9",
          "October"=> "10",
          "November"=> "11",
          "December"=> "12"
}
if d.include? '/'
  l = d.split('/')
  print l[1]+'/'+l[0]+'/'+l[2]
else
  l = d.split(' ')
  print l[1][0,l[1].length-1]+'/'+months[l[0]]+'/'+l[2]
end
