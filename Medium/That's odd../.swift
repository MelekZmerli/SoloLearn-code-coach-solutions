var sum = 0;
var length:Int?
length = Int(readLine()!);
for i in 1...length!{
  var s = Int(readLine()!);
  if(s!%2 == 0){
    sum += s!;
  }
}
print(sum);
