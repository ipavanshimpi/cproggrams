#include<stdio.h>
void main()
{
int maths;
printf("Enter your maths marks :- ");
scanf("%d",&maths);
int phy;
printf("Enter your physics marks :- ");
scanf("%d",&phy);
int chem;
printf("Enter your chemistry marks :- ");
scanf("%d",&chem);
int bio;
printf("Enter your biology marks :- ");
scanf("%d",&bio);
int eng;
printf("Enter your english marks :- ");
scanf("%d",&eng);
int avg;
avg=maths+phy+chem+bio+eng/5;
if(avg>80)
{
printf("you have A Grade");
}
else if(avg>70)
{
printf("you have B Grade");
}
else if(avg>60)
{
printf("you have C Grade");
}
else if(avg>35)
{
printf("you have D Grade");
}
else 
{
printf("you are fail");
}
}
