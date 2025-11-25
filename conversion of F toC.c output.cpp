#include <stdio.h>
int main()
{
	float Celsius,Fahrenheit;
	printf("Enter Temp in Celsius:");
	scanf("%f",&Celsius);
	Fahrenheit=(1.8*Celsius)+32;
	printf("Temperature in Fahrenheit:%.2f",Fahrenheit);
	 return 0;
}
