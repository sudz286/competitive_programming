def bsearch(list1,sec_a):
	x=int(input("Guess: "))
	if(x<sec_a):
		print("Guess too Low")
		print("Guess from %d to %d"%(x,list1[int(len(list1))]))
		return bsearch(list1[x:list1[int(len(list1))]],sec_a)
	if(x==sec_a):
		print("Spot On!")
	if(x>sec_a):
		print("Guess too High")
		print("Guess from %d to %d"%(list1[0],x))
		return bsearch(list1[list1[0]:x],sec_a)
	

import random
list1=[] 
list_len=int(input("Enter Length of list"))
sec_a=random.randint(1,list_len+1)
for x in range(1,list_len+1):
	list1.append(x)
bsearch(list1,sec_a)
