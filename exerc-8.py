n1 = int(input("n1: "))
n2 = int(input("n2: "))
if n1 < n2:
    for i in range(n2-1, n1, -1):
        print (i)
if n2 < n1:
    for i in range(n2+1, n1):
        print (i)