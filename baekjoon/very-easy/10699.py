from datetime import datetime, timedelta, timezone

utc_now = datetime.now(timezone.utc)
seoul_time = utc_now + timedelta(hours=9)
print(seoul_time.strftime('%Y-%m-%d'))