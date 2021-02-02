a = int(input())
b = int(input())
c = int(input())

ans = "Error"

if a == b == c == 60:
    ans = "Equilateral"
elif a + b + c == 180 and (a == b or b == c or a == c):
    ans = "Isosceles"
elif a + b + c == 180:
    ans = "Scalene"

print(ans)