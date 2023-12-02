"OCTAL TO DECIMAL"
n=int(input(""))
sum1=0
base=1
while(n>0):
    rem=n%10
    sum1=sum1+rem*base
    n=n//10
    base=base*8
print(sum1)
"built in fn n=input("") print(int(n,8))"