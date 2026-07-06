a = input(" nhap tuoi cua ban : ")
if int(a) > 0 and int(a) < 18 :
    print("chua du tuoi tham gia!!")
elif int(a) >= 18 and int(a) < 36 : 
    print("ban duoc tham gia tang thu nhat")
elif int(a) >= 36 and int(a) < 100 :
    print(" nang tam cuoc choi")
else:
    print(" lay bo ")