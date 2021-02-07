limit = int(input())
speed = int(input())
over = speed - limit
if over <= 0:
    print("Congratulations, you are within the speed limit!")
elif 0 < over <= 20:
    print("You are speeding and your fine is $100.")
elif 20 < over <= 30:
    print("You are speeding and your fine is $270.")
else:
    print("You are speeding and your fine is $500.")
