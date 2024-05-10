#include<stdio.h>

void main(){
    int i;
    struct week{
        char day[200];
        int attendance;
    }x[7];
   for(i=0;i<7;i++)
   {
    printf("Enter day %d\n",i+1);
    scanf("%s",&x[i].day);
    printf("Percentage of attendance\n");
    scanf("%d",&x[i].attendance);
   }
   for(i=0;i<7;i++)
  {
    if(x[i].attendance>40)
    printf("%s\n",x[i].day);
  }
}