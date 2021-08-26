var siblings:Int?
var popsicles:Int?
siblings = Int(readLine()!)
popsicles = Int(readLine()!)
if(popsicles! % siblings! ==0){
  print("give away")
}
else{
  print("eat them yourself")
}
