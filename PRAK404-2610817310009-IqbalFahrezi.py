while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = input("Masukkan Pilihan : ")

    if pilihan == "5":
        print("Terimakasih, telah menggunakan kalkulator IQBAL FAHREZI")
        break
    elif pilihan in ["1", "2", "3", "4"]:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))

        if pilihan == "1":
            nama = "penjumlahan"
            hasil = a + b
        elif pilihan == "2":
            nama = "pengurangan"
            hasil = a - b
        elif pilihan == "3":
            nama = "perkalian"
            hasil = a * b
        else:
            nama = "pembagian"
            if b == 0:
                print("Pembagian dengan 0 tidak bisa dilakukan")
                continue
            hasil = a / b
        print(f"Hasil {nama} antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")