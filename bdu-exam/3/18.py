count = int(input("Elements count: "))
elements = []

for i in range(count):
    el = int(input("> "))
    elements.append(el)

length = len(elements)
print("Sum:", elements[0] + elements[length - 1])
print("Diff:", elements[0] - elements[length - 1])
print("Rusult:", elements[0] * elements[length - 1])
print("Quotient:", elements[0] / elements[length - 1])
