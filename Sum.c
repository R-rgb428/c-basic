#include <stdio.h>
#include <string.h>
int main(){


char num[100];
printf("Put numbers you want to add: \n");
scanf("%s",&num);
printf("num given are:%s\n",num);
int len=strlen(num);
int i;
int sum=0;
for (i=0;i<len;i++){sum+=num[i]-'0';}
printf("%d\n",sum);



return 0;
}
