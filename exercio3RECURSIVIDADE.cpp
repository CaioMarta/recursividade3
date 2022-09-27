#include <stdio.h>
#include <stdlib.h>

int main()

{

float i, num, exp, res = 1;

printf("Entre com o numero a ser calculado: ");
scanf("%f",&num);

printf("Expoente: ", num);
scanf("%f", &exp);

for(i=0; i<exp; i++) 

{

res *= num;

}


printf("\n\n\nO resultado é: %.2f\n\n\n", res);


return 0;

}