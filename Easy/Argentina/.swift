var pesos:Int?
var dollars:Int?
pesos = Int(readLine()!);
dollars = Int(readLine()!);
pesos = pesos!*2/100;
if(pesos!<dollars!){
  print("Pesos");
}
else{
  print("Dollars");
}

