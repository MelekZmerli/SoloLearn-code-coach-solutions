var pts:Int?
var gun:Int?

pts = Int(readLine()!);
gun = Int(readLine()!);
if(pts!/12>=gun!){
  print("Buy it!");
}
else{
  print("Try again");
}
