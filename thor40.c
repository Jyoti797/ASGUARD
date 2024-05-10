#include<stdio.h>

void main(){
    int voters[10];
    int i;
     for(i=1;i<=10;i++){
        printf("Age of Voter %d\n",i);
        scanf("%d",&voters[i]);
     }

    for(i=1;i<=10;i++)
    {
        if(voters[i]>=18)
        printf("Voter %d is eligible for voting\n",i);
        else
          printf("Voter %d is not eligible for voting\n",i);
    }
}