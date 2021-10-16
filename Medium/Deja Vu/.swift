import Foundation
let s = readLine()!;
for c in s{
  let token = s.components(separatedBy: String(c)).count - 1;
  if(token > 1){
    print("Deja Vu");
    exit(0);
  }
}
print("Unique");
