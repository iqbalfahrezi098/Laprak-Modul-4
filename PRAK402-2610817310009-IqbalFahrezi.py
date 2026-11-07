n = int(input())

ganjil = []
for i in range(1, n + 1, 2):
    ganjil.append(str(i))

genap = []
genap_awal = n if n % 2 == 0 else n - 1
for i in range(genap_awal, 1, -2):
    genap.append(str(i))

print(" ".join(ganjil))
print(" ".join(genap))