count = int(input("Elements count > "))
ls = []

for i in range(count):
    item = int(input("> "))
    ls.append(item)

print("Initial list:", ls)
print("Processed list: ", end='')
for i in range(count):
    print(ls[count - i - 1], ' ', end='')
