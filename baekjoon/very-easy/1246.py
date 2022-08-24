while True:
    a = input()
    if a == '#': break
    print(len([i for i in a if i in "aeiouAEIOU"]))