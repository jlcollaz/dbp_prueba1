n = int(input("Ingrese número: "))
divs = 0
for i in range(1, int((n)/2)+1):
    if(n % i == 0):
        divs += 1

if(divs == 1):
    print("Es primo")
else:
    print("No es primo")
