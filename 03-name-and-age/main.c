#include<stdio.h>

int main(){
char str[20];
fgets(str,20,stdin);
str[strcspn(str,"\n")]="\0";
	int y;
	scanf("%d",&y);
	printf("My name is %s\n",str);
printf("I am %d years old.\n",y);
return 0;}
