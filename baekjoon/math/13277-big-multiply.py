from decimal import Decimal,getcontext
getcontext().prec=10**6

a,b = map(Decimal,input().split())
print(format(a * b,'f'))
