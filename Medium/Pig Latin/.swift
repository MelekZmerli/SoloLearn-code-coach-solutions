import Foundation
var msg = readLine()!;
var words = msg.components(separatedBy: " ");
var pig = String();
let firstIndex = String.Index(encodedOffset: 0);
let secondIndex = String.Index(encodedOffset: 1);
for word in words{
    pig += word[secondIndex...]+String(word[firstIndex])+"ay ";
} 
print(pig);
