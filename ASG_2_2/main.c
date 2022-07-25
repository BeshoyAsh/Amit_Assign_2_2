#include <stdio.h>
#include <stdlib.h>

int main()
{
    // armstrong number examples(0,1,153,370,371,407)
    // note: this is for numbers which has base 3
    int user_number,sum=0,mod,temp,temp2;
    int countbase=0;
    printf("--- This program can check number maximum 9 digits ---\n");
    printf("please enter your number:");
    scanf("%d",&user_number);
    temp=user_number; // bec i want to save user number input in another variable bec it will change in while loop
    temp2=user_number;

    while(temp2 != 0){
        temp2=temp2/10;
        countbase++;
    }
    printf("your number base count=%d",countbase);
    //base 1
    while(user_number>0 && (countbase==1))
    {
        mod = user_number%10;
        sum=sum+(mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //base 2
    while(user_number>0 && (countbase==2))
    {
        mod = user_number%10;
        sum=sum+(mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //base 3
    while(user_number>0 && (countbase==3))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //base 4
    while(user_number>0 && (countbase==4))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    // base 5
    while(user_number>0 && (countbase==5))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //base 6
    while(user_number>0 && (countbase==6))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod*mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    // base 7
    while(user_number>0 && (countbase==7))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod*mod*mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //base 8
    while(user_number>0 && (countbase==8))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod*mod*mod*mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //base 9
    while(user_number>0 && (countbase==9))
    {
        mod = user_number%10;
        sum=sum+(mod*mod*mod*mod*mod*mod*mod*mod*mod);
        user_number=user_number/10;
        //printf("%d    %d\n  ",mod,user_number);
    }
    //if we want more base digit we cann add new while loop with the count we need.
    (temp==sum)?printf("\nThis number is Armstrong"):printf("\nThis number is not armstrong");
    return 0;
}
