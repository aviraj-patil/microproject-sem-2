#include <stdio.h>
#include <conio.h>

float cube();
float cuboid();

int main()
 {

   int flag=0;
   float ans;
   printf("****************** enter your choice ******************\n\n\n");
   printf("\tNo 1. volume of cube\n");
   printf("\tNo 2. volume of cuboid\n");
   printf("\tNo 0. exit");

   while (1){
     ans=0;
     printf("\n\n\n\tchoice >>");
     scanf("%d", &flag);

     if (flag==1) {

       ans=cube();
       printf("\n\nvolume of cube is %.2f",ans);
     }
     else if (flag==2) {
       ans=cuboid();
       printf("\n\nvolume of cuboid is %.2f",ans);
     }else if (flag==0){
       break;
     }
     else printf("\n\n\tplease Fuck yourself and enter valid choice!!\n\n");
     }
     return 0;
     }
float cube()
{
  float edge;
  printf("\n\t\tEnter Edge of cube");
  printf("Edge>>");
  scanf("%f",&edge);
  return edge*edge*edge;
}
float cuboid()
{
  float length,width,height;
  printf("\n\t\tEnter length, width, height of cuboid:");
  printf("\nlength>>");
  scanf("%f",&length);
  printf("width>>");
  scanf("%f",&width);
  printf("height>>");
  scanf("%f",&height);
  return length*width*height;
}
