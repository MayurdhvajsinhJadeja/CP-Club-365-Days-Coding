# Set A - Que 2
n=int(input("Enter Length of Array: "))
X=int(input("Enter Target: "))
a=[]
l=[]
for i in range(n):
    x=int(input())
    a.append(x)
a.sort()
for i in range(len(a)):
    if(a[i]==X):
        l.append(i)
print(l[0],l[-1])