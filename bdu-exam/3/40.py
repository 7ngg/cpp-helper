def contains(items: list[int], numToFind: int) -> bool:
    for item in items:
        if item == numToFind:
            return True
    return False


count = int(input("Elements count > "))
items = []
unique = []

for i in range(count):
    item = int(input("> "))
    items.append(item)

for item in items:
    if not contains(unique, item):
        unique.append(item)

print(unique)
