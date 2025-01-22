count = int(input("Elements count: "))
elements = []

for i in range(count):
    el = int(input("> "))
    elements.append(el)

sum = 0
for i in elements:
    sum += i

print("Result: ", sum)

