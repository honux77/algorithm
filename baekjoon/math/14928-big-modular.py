from decimal import Decimal,getcontext
getcontext().prec = 10 ** 6

a = Decimal(input())
print(format(a % 20000303,'f'))
