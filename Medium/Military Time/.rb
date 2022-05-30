
OldDate = gets
def converT(text)
    if text[5] == 'A'
        puts '0'+text[0,4]



    elsif text[5] == 'P'
            if text[0]== '1'
                puts "13"+text[1,4]
            elsif text[0]== '2'
                puts "14"+text[1,4]
            elsif text[0]== '3'
                puts "15"+text[1,4]
            elsif text[0]== '4'
                puts "16"+text[1,4]
            elsif text[0]== '5'
                puts "17"+text[1,4]
            elsif text[0]== '6'
                puts "18"+text[1,4]
            elsif text[0]== '7'
                puts "19"+text[1,4]
            elsif text[0]== '8'
                puts "20"+text[1,4]
            elsif text[0]== '9'
                puts "21"+text[1,4]
            end
           
       


    elsif text[6] == 'A'
        if text[1]=='2'
            puts "00"+text[2,4]
        else
            puts text[0,5]
        end



    else
        if text[1]=='0'
            puts "22"+text[2,4]
        elsif text[1]=='1'
            puts "23"+text[2,4]
        elsif text[2]=='2'
            puts text[0,4]
        else
            puts (text[0,2].to_i+12).to_s+text[2,4]
        end
    end
end
converT(OldDate)