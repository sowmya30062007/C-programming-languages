//armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,digit_count,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	digit_count=(int)log10(n)+1;
	//raising individual digits to the digit_count power and adding
	while(temp)
	{
		int cur_digit=temp%10;
		sum+=pow(cur_digit,digit_count);
		temp=temp/10;
	}
	//checking
	if(sum==n)
	printf("%d is an armstrong number",n);
	else
	printf("%d is not an armstrong number",n);
	return 0;
}
