import Foundation
let symbols = CharacterSet.init(charactersIn: "!@#$/^&*(-:;,?')")
let d = CharacterSet.decimalDigits
var p:String = readLine()!
var s = 0
var n = 0
for c in p.unicodeScalars{
    if(symbols.contains(c)){ // count symbols
        s += 1
    }
    else if(d.contains(c)){ // count digits
        n += 1
    }
}
if(p.count > 7 && n > 1 && s > 1){
    print("Strong")
}
else{
    print("Weak")
}