import Foundation
var f:String = readLine()!
var money = false
var thief = false
for c in f{
    if(c == "T"){
        if(money){
            print("ALARM")
            exit(0)
        }
        thief = true
    }
    else if(c == "$"){
        if(thief){
            print("ALARM")
            exit(0);
        }
        money = true
    }
    else if(c == "G"){
        money = false
        thief = false
    }
}
print("quiet")