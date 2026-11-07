n, k = input().split()
n = int(n)
k = int(k)

total = 0
for i in range(1, n + 1):
    suku = []
    jumlah = 0
    for j in range(i, 0, -1):
        suku.append("(" + str(j) + " * " + str(k) + ")")
        jumlah += j * k
    print(" + ".join(suku) + " = " + str(jumlah))
    total += jumlah
print(total)