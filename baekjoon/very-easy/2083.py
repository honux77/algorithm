while True:
    a = input().split()
    if a[0] == '#': break

    name = a[0]    
    w, h = map(int, a[1:])
    if w > 17 or h >= 80:
        print(name, "Senior")
    else:
        print(name, "Junior")
