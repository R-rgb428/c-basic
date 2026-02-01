#include <stdio.h>
int main(){
float n,num;
// n is number who will divide num provided by the user
printf("Number to divide : ");
scanf("%f",&num);
printf("Number by which to divide : ");
scanf("%f",&n);
float a = num/n;
printf("%.2f Divided by %.2f is : %.2f",num,n,a);




return 0;
}
