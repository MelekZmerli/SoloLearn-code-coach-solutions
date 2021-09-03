var gain:Int?
gain = Int(readLine()!);
gain = gain!*3-21;
if(gain! < 0){
  print("Loss");
}
else if(gain! > 0){
  print("Profit");
}
else{
  print("Broke Even");
}
