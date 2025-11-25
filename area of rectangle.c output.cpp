# include<stdio.h>
int main ()
{
	//declare variables
	float l,b,area;
	//take inputs
	printf("enter l & b of rectangle(in cm):");
	scanf("%f%f",&l,&b);
	//calculate area 
	area=l*b;
	//display result
	printf("area of rectangle=%.3fcm\n",area);
	return 0; 
}
