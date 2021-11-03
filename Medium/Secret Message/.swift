let alphabet = "abcdefghijklmnopqrstuvwxyz";
var result ="";
for c in readLine()!.lowercased(){
    if a.index(of: c) != nil{
        // it gets really ugly in the next statement, pretty sure one of the worst lines of code I have ever wrote 
        result += String(a[a.index(a.startIndex,offsetBy:a.count-1-a.distance(from:a.startIndex,to: a.index(of:c)!))]);
    }
    else{
        result += " ";
    }
}
print(result);
}