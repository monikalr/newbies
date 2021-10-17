#include <stdio.h> 
#include <math.h>
void main()
{
        int a,b,D,c;
        float x1,x2;
        printf("enter an integer a,b\n");
        scanf("%d%d",&a,&b);
        D=(b*b-4*a*c);
        printf("%d",D);
        if(D>0)
        {
        printf("roots are real and unequal\n");
        x1=x2=(-b+sqrt(D))/(2*a);
        printf("x1=%f,x2=%f",x1,x2);
        }
        else if(D==0)
        {
        printf("roots are real and equal\n");
        x1=x2=(-b)/(2*a);
        printf("x1=%f,x2=%f",x1,x2);
        }
        else
        {
        printf("roots are imaginary\n");
        x1=-b/(2*a);
        x2=sqrt(-D)/(2*a);
        printf("x1=%f+%f*i",x1,x2);
        printf("x2=%f-%f*i",x1,x2);
        }
}






