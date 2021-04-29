#include<stdio.h>
void sum();
void sub();
void main()
{

  int ch=0;
printf("****************** enter your choice ******************\n\n\n");
printf("\tNo 1. addition:\n");
printf("\tNo 2. substraction:\n");
printf("\tNo 0. exit");

while (1){
  printf("\n\n\n\tchoice >>");
  scanf("%d", &ch);
if (ch==1) {
  sum();
}
else if (ch==2) {
  sub();
}else if (ch==0){
  break;
}
else printf("\n\n\tplease Fuck yourself and enter valid choice!!\n\n");
}
}
void sum()
{
    int a,b;
    printf("\n\t\tEnter two numbers:\n");
    printf("first num>>");
    scanf("%d",&a);
    printf("\nsecond num>>");
    scanf("%d",&b);
    printf("\n\nThe sum is %d",a+b);
}
void sub()
{
    int a,b;
    printf("\n\t\tEnter two numbers:\n");
    printf("first num>>");
    scanf("%d",&a);
    printf("\nsecond num>>");
    scanf("%d",&b);
    printf("\n\nThe subtraction is %d",a-b);
}
