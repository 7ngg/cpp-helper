count = int(input("Elements count: "))
elements = []

for i in range(count):
    el = int(input("> "))
    elements.append(el)

min = elements[0]
for element in elements:
    if element < min:
        min = element

print("Max =", min)

