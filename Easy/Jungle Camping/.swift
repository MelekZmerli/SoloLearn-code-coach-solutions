import Foundation
var msg = readLine();
var out = "";
let sounds = msg!.components(separatedBy:" ");
for s in sounds{
  switch s{
    case "Grr":
      out += "Lion ";
    case "Rawr":
      out += "Tiger ";         
    case "Chirp":
      out += "Bird ";
    case "Ssss":
      out += "Snake ";
    default:
      continue;
  }
}
print(out);
