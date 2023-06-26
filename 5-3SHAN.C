// Q1 write a program to finde the minimum number from the given 3 number using the ternary operator.

#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the value of c:");
scanf("%d",&c);
(a<b)?(a<c)?printf("a is min..")
	   :printf("c is min..")
	 :(b<c)?printf("b is min..")
	    :printf("c is min..");
getch();


}