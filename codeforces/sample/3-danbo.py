n = int(input())

for _ in range(n):
    words = input().split(" ")
    output = []
    begin = True;
    for word in words:
        first = word[0].lower()
        word = word[1:] + first + "ay"
        if begin:
            first = word[0].upper()
            word = first + word[1:]
            begin = False
        output.append(word)
    
    print(" ".join(output))
