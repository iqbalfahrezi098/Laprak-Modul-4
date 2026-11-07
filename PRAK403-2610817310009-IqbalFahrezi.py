a, b = input().split()
a = int(a)
b = int(b)

if a < b:
    langkah = 1
else:
    langkah = -1
pasangan = []
for x in range(a, b + langkah, langkah):
    y = a + b - x
    pasangan.append(str(x) + " " + str(y))
print(" - ".join(pasangan))