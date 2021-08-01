#include main.h

static int sum = 0;

void incrementSum(){
    sum += 1;
}

int main(){

    printf("Hello World!");

   int i = 0;
   while(i < 10){
       incrementSum();
       i++;
   }

   printf("Sum = %d", sum);


    return 0;
}
