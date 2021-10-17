import Foundation
let result = String(readLine()!.replacingOccurrences(of: "[^a-zA-Z ]",with: "",options: .regularExpression).reversed());
print(result);
