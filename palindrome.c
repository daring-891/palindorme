#include<stdio.h>
#include<math.h>
void main() {
	int a,n=0,temp,i,r;
	printf("Enter a number>>");
	scanf("%d",&a);
	temp=a;
	while(temp !=0)
	{
		temp=temp/10;
		n++;
	}
	r=n-1;
	temp=a;
	for(i=0;i<n/2;i++,r--)
	{
		if(temp/pow(10,r)!=temp%10)
			break;
		
		temp=temp/10;
		
	}
	if(i!=n/2)
	printf("yes");
	else
	printf("No");


}
