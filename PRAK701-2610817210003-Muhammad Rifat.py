print("Nama Depan : ", end="")
depan = input()
print("Nama Belakang : ", end="")
belakang = input()

lengkap = depan + " " + belakang
panjang = len(depan) + len(belakang)
print("Nama Lengkap :", lengkap)
print("Panjang Nama (tanpa spasi) :", panjang)