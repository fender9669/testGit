#include main.h

static int sum = 0;

void incrementSum(){
    sum += 2;
}

int main(){

    printf("Hello World!");
    printf("Second hello world");

   int i = 0;
   while(i < 10){
       incrementSum();
       i++;
   }

   printf("Sum = %d", sum);


    return 0;
}
