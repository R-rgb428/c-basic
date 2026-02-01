#include <stdio.h>
int main(){
int n,m=0;
int i;
printf("Number to check : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    if (n%i==0)
        m++;
};
if (m==2)
{
    printf("The number is prime");
}
else
{
    printf("The number is not prime");
};




return 0;
};
