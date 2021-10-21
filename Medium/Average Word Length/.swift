import Foundation
let msg = readLine()!.replacingOccurrences(of:"[^a-zA-Z ]",with:"",options: .regularExpression);
let words = msg.components(separatedBy: " ");
print(msg.cout/words.count);
