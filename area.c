#include<stdio.h>
#define Pl 3.14159
int main(){
float radius, area;
printf("enter radius of the circle:");
scanf("%f",&radius);
area= Pl* radius*radius;
printf("area of the circle=%.2f\n",area);
return 0;
}
