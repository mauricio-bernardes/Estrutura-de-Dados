#include <stdio.h>


int fibonacci(int n){

  if(n<2){

    return  n;

  }

  else{

    return fibonacci(n-1) + fibonacci(n-2);

  }

}
 

int main(void){


  int num, i;


  printf("Digite a quantidade de numeros: ");

  scanf("%d", &num);


  for(i=0; i < num; i++){

    

    printf("%d\n", fibonacci(i));


  }

}