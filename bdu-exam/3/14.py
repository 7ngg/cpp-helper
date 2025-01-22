count = int(input("Elements count: "))
elements = []

for i in range(count):
    el = int(input("> "))
    elements.append(el)

max = elements[0]
for element in elements:
    if max < element:
        max = element

print("Max =", max)

