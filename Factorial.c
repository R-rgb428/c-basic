#include <stdio.h>
#include <string.h>
int main(){
int n,i,pro=1;
printf("Enter the int : ");
scanf("%d",&n);
for (i=1;i<=n;i++){pro *= i;}
printf("Factorial of %d is : %d",n,pro);
return 0;
}
