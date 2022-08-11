from curses.ascii import islower


a = input()
b = []
for i in a:
    if i.islower():
        b.append(i.upper())
    else:
        b.append(i.lower())
print("".join(b))