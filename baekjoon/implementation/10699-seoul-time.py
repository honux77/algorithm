from datetime import datetime, timezone, timedelta
utc = datetime.now(timezone.utc)
seoul = utc + timedelta(hours = 9)
print(seoul.strftime("%Y-%m-%d"))
print("{}-{:02d}-{:02d}".format(seoul.year, seoul.month, seoul.day))
