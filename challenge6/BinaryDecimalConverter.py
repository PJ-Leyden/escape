import os
os.system('cls')
os.system('clear')

print("<<<< Binary/Decimal Converter >>>>")
print("<<<<      Version 1.0.0       >>>>")
print("<<<<    Press 'x' to quit.    >>>>")

while True:
    user_input = input("Enter a number in binary format (i.e. 00010100): ") 
    if user_input == 'x':
        break
    else:
        try:
            binary = user_input
        except:
            ValueError
            print("Invalid binary format")
        else:
            try:
                decimal = int(binary, 2);
            except:
                TypeError
                print("Invalid binary format")
            else:
                print (binary, " in decimal = ", decimal);
