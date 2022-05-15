func militaryTime(text:String) -> String {
    if(text[text.index(text.startIndex,offsetBy:5)] == "A"){ // X:XX AM format
        return "0" + text[text.startIndex..<text.index(text.startIndex,offsetBy:5)];
    }

    else if(text[text.index(text.startIndex,offsetBy:6)] == "A"){ // XX:XX AM format
        if(text[text.index(text.startIndex,offsetBy:1)] == "2"){ //12:XX AM 
            return "00" + text[text.index(text.startIndex,offsetBy:2)..];
        }
        else {
            return text[text.startIndex..<text.index(text.startIndex,offset:5)];
        }
    }

    else if(text[text.index(text.startIndex,offsetBy:5)] == "P"){ // X:XX PM format
        return String(Int(String(text[text.startIndex]))! + 12) + String(text[text.index(text.startIndex,offsetBy:1)..<text.index(text.startIndex,offsetBy:4)]);
    }

    else{ // XX:XX PM format
        return String(Int(String(text[text.startIndex..<text.index(text.startIndex,offsetBy:2)]))! + 12) + String(text[text.index(text.startIndex,offsetBy:2)..<text.index(text.startIndex,offsetBy:5)]);
    }
}