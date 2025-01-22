def isPalindrome(items: list):
    length = len(items)

    for i in range(length // 2):
        if (items[i] != items[length - 1 - i]):
            return False
    
    return True


count = int(input("Elements count > "))
items = []

for i in range(count):
    item = input("> ")
    items.append(item)

res = isPalindrome(items)
if res:
    print(items, "is palindrome")
else:
    print(items, "is not palindrome")
