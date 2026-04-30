def wieksza(x, y):
    if x > y:
        return x
    return y


x = int(input("Proszę wpisać liczbę x: "))
y = int(input("Proszę wpisać liczbę y: "))

wynik = wieksza(x, y)

print("Liczba większa to", wynik)