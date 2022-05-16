import Foundation
var me:String = readLine()!
var agents:Int = Int(readLine()!)!
var candidates = readLine()!.components(separatedBy: " ")
others.append(me)
others.sort()
print(others.firstIndex(of: me)! / agents * 20 + 20)