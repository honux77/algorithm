while True:
    a = input()
    if a == '0': break
    size = len(a) + 1
    for i in a:                
        if i == '1': size += 2
        elif i == '0': size += 4
        else: size += 3
    print(size)
