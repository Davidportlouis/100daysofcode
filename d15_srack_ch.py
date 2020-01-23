x,y = input().split()
x,y = int(x),int(y)
z = round(float(str(x)+"."+str(y)),2)
print(format(z,'.2f'))