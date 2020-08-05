#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("Enter (x1,y1) : ");
    scanf("%f,%f",&x1,&y1);
    printf("\nEnter (x2,y2) : ");
    scanf("%f,%f",&x2,&y2);
    printf("\nEnter (x3,y3) : ");
    scanf("%f,%f",&x3,&y3);

    double x = pow((x1-x2),2)+ pow((y1-y2),2);
    double a = sqrt(x);
    float incenter_x = (x1+x2+x3)/3;
    float incenter_y = (y1+y2+y3)/3;
    printf("incenter x : %f , y : %f\n",incenter_x,incenter_y);
    printf("Area of incircle : %f\n",(3.14*a*a)/12);       

}