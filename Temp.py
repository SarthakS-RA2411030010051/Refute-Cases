temp = int(input("Enter Temperature: "))
op = int(input("Choose the unit of temperature:-\n1) Celsius\n2) Fahrenheit\n3) Kelvin\nOption: "))

if op == 1:
    c = temp
    f = (temp*9/5)+32
    k = temp + 273
    print(f"Temperature in:-\nCelsius: {c}C\nFahrenheit: {f}F\nKelvin: {k}K")
elif op == 2:
    c = (temp-32)*5/9
    f = temp
    k = c + 273
    print(f"Temperature in:-\nCelsius: {c}C\nFahrenheit: {f}F\nKelvin: {k}K")
elif op == 3:
    c = temp-273
    f = (c*9/5)+32
    k = temp
    print(f"Temperature in:-\nCelsius: {c}C\nFahrenheit: {f}F\nKelvin: {k}K")
else:
    print("Invalid Input")