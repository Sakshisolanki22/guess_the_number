#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1;//generate random no.b/w 1 to 100
    //printf("The number is %d",number);
    // keep running the loop until the no. is gussed
    do{
        printf("guess the no. b/w 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower no. please!\n");
        }
        else if(guess<number){
            printf("Higher no. please!\n");
        }
        else{
            printf("You guessed it in %d attempt\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}