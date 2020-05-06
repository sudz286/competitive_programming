n=int(input("Enter Number:"))
list1=range(1,n+1)
list2=[]
for i in range(0,n):
	if n%list1[i]==0:
		list2.append(list1[i])
print(len(list2))
for x in list2:
	print(x)