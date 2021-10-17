import Foundation
let result = readLine()!.replacingOccurrences(of: "[^a-zA-Z0-9] ",with: "",options: .regularExpression);
print(result);
