var yards:Int?
yrds = Int(ReadLine()!)
if(yrds!>10){
  print("High Five");
}
else if (yrds!>=1){
  var i:Int?
  i=0;
  while(i!<yrds!){
    print("Ra!");
    i!+=1;
  }
}
else{
  print("shh");
}
