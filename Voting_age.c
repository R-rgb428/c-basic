#include <stdio.h>
int main(){
int age;
printf("Your age : ");
scanf("%d",&age);
if (age>=18)
{
    printf("You are eligible to vote");
}
else if (age<0)
{
    printf("You are still to born");
}
else
{
    printf("No");
};




return 0;
}
