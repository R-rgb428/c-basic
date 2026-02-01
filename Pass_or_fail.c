#include <stdio.h>
int main(){
int num,total_marks;
printf("Total marks of exam : ");
scanf("%d",&total_marks);
printf("Number you got : ");
scanf("%d",&num);
if(num>=(total_marks)/3)
{
    printf("You Passed and you scored %d",(num*100)/total_marks);
}
else
{
    printf("You failed!!!");
};





return 0;
}
