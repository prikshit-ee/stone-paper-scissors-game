#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int  computer= rand() % 4 + 1;

    // okay our gaame is of stone paper and siccesors //
    /* so for stone =1
    for paper = 2
    for pencil = 3
    for scissor = 4 
    */
   int number ;
   printf("ready to ply stone paper and scissior . for this \n");
   printf("so choose 2 for paper\n");
   printf("choose 1 for stone\n");
   printf("choose 3 for pencil\n");
   printf("choose 4 for scicors\n");
   printf("priorty is like that stone>scissors >pencil>paper\n");
   printf("choose anumber now ;");
   scanf("%d" , &number);
   printf("computer choose %d\n" , computer );
   if(computer ==1 && number ==1){
    printf("draw sorry chosse again ");

   }
   else if(computer ==2 && number == 2){
    printf("draw choose again");
   }
   else if( computer == 3 && number ==3){
    printf("draw choose again ");
   }
   else if(computer ==4 && number == 4){
    printf("draw choose again ");

   }
   else if ( computer == 1 && number == 2){
    printf("you loose computer wins haha!!");
   }
   else if (computer == 2 && number ==1){
    printf("you win computer choose paper");

   }
   else if ( computer == 3 && number ==1 ){
    printf(" you loose computer choose pencvil");
   }
   else if ( computer == 1 && number == 3){
    printf(" you computer wins !!");
   }
   else if (computer ==4 && number == 1 ){
    printf(" you win !!");
   }
   else if (computer == 1 && number == 4){
    printf("computer win meow !! ");
   }
   else if ( computer == 2 && number ==3){
    printf("you win");
   }
   else if(computer == 3 && number == 2){
    printf("you losse meow");
   }
   else if(computer ==4 && number ==2){
    printf("computer wins");

   }
   else if ( computer ==2 && number ==4){
    printf("you wins");
   }
   else if( computer ==3 && number == 4){
    printf("you wins");

   }
   else if(computer ==4 && number ==3){
    printf("compter wins you loose !!");
   }
   else {
    printf("i think  some error happens try with other digits sorry for inconvience ");

   }
   return 0;
}