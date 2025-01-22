count = int(input("Elements count: "))
elements = []

for i in range(count):
    el = int(input("> "))
    elements.append(el)

evenSum = 0
evenCount = 0

for element in elements:
    if element % 2 == 0:
        evenCount +=1 
        evenSum += element

print("Count:", evenCount)
print("Sum:", evenSum)
