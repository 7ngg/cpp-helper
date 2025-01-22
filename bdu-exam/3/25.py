count = int(input("Enter elements count > "))
list = []
processedLsist = []

for i in range(count):
    item = int(input("> "))
    list.append(item)

for i in list:
    processedLsist.append(i * i)

print("Result:", processedLsist)
