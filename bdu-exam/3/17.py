count = int(input("Elements count: "))
elements = (1, 2, 3, 4, 5) # Т.к кортеж - неизменяемый список, укажем элементы явно

sum = 0
for element in elements:
    sum += element

print("Average:", sum / len(elements))
