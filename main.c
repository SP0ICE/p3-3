#include <stdio.h>
#include <math.h>
int main() {
int a,b,a1,b1;
printf("Enter two numbers \n");
scanf("%d %d",&a,&b);
a1=a; b1=b;
while (a!=0,b!=0){
 if (a>b){
   a=a-b;}
 else {
   b=b-a;}
}
printf("The greatest common divisor for " "%d" " and " "%d" " is " "%d",a1,b1,a);
}
