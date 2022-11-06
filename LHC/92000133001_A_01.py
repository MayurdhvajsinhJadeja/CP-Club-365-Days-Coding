# Set A - Que 1
n=int(input("Enter Length of Array: "))
count=1
# a=[1,9,3,10,4,20,2]
a=[]
for i in range(n):
    x=int(input())
    a.append(x)
a.sort()
# print(a)
for i in range(len(a)):
    if(a[i]<a[i+1]-1):
        break
    else:
        count+=1
print("longest consecutive subsequence: ",count)