#include<stdio.h>
void main()
{
int temp;
printf("Enter your tempreture :-");
scanf("%d",&temp);
int oxy;
printf("Enter your oxygen level :-");
scanf("%d",&oxy);
if(temp>80&&oxy>90)
{
printf("You are corona positive");
}
else
{
printf("you are normal");
}
}
