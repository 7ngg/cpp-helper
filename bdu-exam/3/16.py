count = int(input("Elements count: "))
elements = []

for i in range(count):
    el = int(input("> "))
    elements.append(el)

sum = 0
for element in elements:
    sum += element

print("Average:", sum / len(elements))
