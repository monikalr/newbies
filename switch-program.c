#include <stdio.h>
#include <stdlib.h>
void main()
{
	float a,b,c;
	int choice;
	printf("arithmetic operation menu\n");
	printf("enter the number a,b\n");
	scanf("%f%f",&a,&b);
	printf("1.add\n");
	printf("2.sub\n");
	printf("3.mul\n");
	printf("4.div\n");
	printf("5.exit\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: c=a+b;
			break;
		case 2: c=a-b;
			break;
		case 3: c=a*b;
			break;
		case 4: c=a/b;
			break;
		case 5: 
			break;
		default:
			printf("invalid entry\n");
			break;
	}
			
	
		printf("c=%f",c);	
	
} 
