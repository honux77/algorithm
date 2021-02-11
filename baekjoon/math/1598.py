a, b = map(int, input().split())
ac = (a - 1) // 4
ar = (a  - 1) % 4
bc = (b - 1) // 4
br = (b  - 1) % 4
print(abs(br - ar) + abs(bc - ac))
