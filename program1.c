#include<stdio.h>
#include<math.h>
Int main()
{
int n,r,flag=0,s=0;
printf("Enter a three digit number");
scanf("%d",&n);

while(n>0)
{
r=n%10;
flag=1;
s=s+r*pow(flag,10);
n=n/10;
}
print("%d",s);
return 0;

}

