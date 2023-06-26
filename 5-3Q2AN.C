//Q2 write a program to create a menu-driven program for telecom call service
#include<stdio.h>
#include<conio.h>

void main(){
int choice,english,gujarati,hindi;
clrscr();
printf("Press 1 for english\n");
printf("Press 2 for hindi\n");
printf("Press 1 for gujarati\n");
printf("Enter your choice:");
scanf("%d",&choice);

switch(choice){
case 1:
    printf("Press 1 for internet Recharge\n");
    printf("Press 1 for Top-up recharge\n");
    printf("Press 1 for Specal Recharge\n");
    printf("enter your choice:");
    scanf("%d",&english);
    switch(english){
    case 1:
    printf(" You have successfully done internet recharge\n");
    break;
    case 2:
    printf(" You have successfully done Top-up recharge\n");
    break;
    case 3:
    printf(" You have successfully done Specal recharge\n");
    break;
    default:
    printf("noo plan availabel");
    break;}
case 2:
    printf("internet recharge ke liye 1 dabaiye\n");
    printf("Top-up recharge ke liye 2 dabaiye\n");
    printf("specal recharge ke liye 3 dabaiye\n");
    printf("enter your choice:");
    scanf("%d",&hindi);
    switch(hindi){
    case 1:
    printf("apne safaltapurvak internet recharge kar liya hai\n");
    break;
    case 2:
    printf("apne safaltapurvak Top-up recharge kar liya hai\n");
    break;
    case 3:
    printf("apne safaltapurvak Special recharge kar liya hai\n");
    break;
    default:
    printf("noo plan availabel");
    break;}
case 3:
    printf("internet recharge mate 1 dabavo\n");
    printf("Top-up recharge mate 2 dabavo\n");
    printf("specal recharge mate 2 dabavo\n");
    printf("enter your choice:");
    scanf("%d",&gujarati);
    switch(gujarati){
    case 1:
    printf("tame safaltapurvak internet recharge karyu chhe.\n");
    break;
    case 2:
    printf("tame safaltapurvak Top-up recharge karyu chhe\n");
    break;
    case 3:
    printf("tame safaltapurvak special recharge karyu chhe\n");
    break;
    default:
    printf("noo plan availabel");
    break;
    }}
    getch();
    }








