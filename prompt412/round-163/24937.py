text = "SciComLove"

n = int(input()) % len(text)
print(text[n:] + text[:n])
