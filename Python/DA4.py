def fibo(n):
	if(n==1):
		return 0
	if(n==2):
		return 1 
	else:
		return fibo(n-1)+fibo(n-2)

n=int(input("Enter the nth element>>"))
result=0
result=fibo(n)
print("The %d term of the fibonacci series is %d "%(n,result))
