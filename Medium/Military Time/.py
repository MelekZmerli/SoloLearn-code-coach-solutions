
OldDate = input()
def converT(text):
    if text[5] == 'A':
        return '0'+text[:5]



    elif text[5] == 'P':
            if text[0]== '1':
                return "13"+text[1:4]
            elif text[0]== '2':
                return "14"+text[1:4]
            elif text[0]== '3':
                return "15"+text[1:4]
            elif text[0]== '4':
                return "16"+text[1:4]
            elif text[0]== '5':
                return "17"+text[1:4]
            elif text[0]== '6':
                return "18"+text[1:4]
            elif text[0]== '7':
                return "19"+text[1:4]
            elif text[0]== '8':
                return "20"+text[1:4]
            elif text[0]== '9':
                return "21"+text[1:4]
            
        


    elif text[6] == 'A':
        if text[1]=='2':
            return "00"+text[2:5]
        else:
            return text[:5]



    else:
        if text[1]=='0':
            return "22"+text[2:5]
        elif text[1]=='1':
            return "23"+text[2:5]
        elif text[1]=='2':
            return text[:5]
        else:
            return str(int(text[:2])+12)+text[2:5] #credits to Python Learner for the help

print(converT(OldDate))

        
