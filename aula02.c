#include <malloc.h>
#include <stdio.h>
/*
typedef struct{
    int peso;
    int altura;
} PesoAltura;

typedef int CHAVE; // definimos que a palavra CHAVE poderá ser usada no código para representar o tipo int (inteiro), isto é, demos um novo nome para o tipo _int_

#define alturaMaxima 225 // diz que essa palara "alturaMaxima vale 225" 

int main(){
      
      PesoAltura pessoa1;
      pessoa1.altura = 173;
      pessoa1.peso = 63;


    printf("Peso: %i, Altura: %i\n", pessoa1.peso, pessoa1.altura);

    if(pessoa1.altura >= alturaMaxima){
        printf("\nAltura acima da permitida!\n");
    }else{
        printf("Altura permitida ");
    }


int main(){

int x = 25; 
// a variavel x é inicializada com o valor 25 
int* y = &x;
// a variavel y recebe o endereço onde está a variavel x 
*y = 30;
// coloca-se o valor 30 na posição de memoria referenciada (apontada) pelo endereço armazenado em y 

printf("valor de x: %i\n", x);
*/

/* 
a função malloc:
- recebe como parametro o numero de bytes que deseja alocar;
- retorna o endereço inicial do bloco de bytes que foi alocado, porém esse retorno tem tipo void* (ponteiro para void ) por isso usamos (int*) para converter para ponteiro para int
*/
/*
int main(){

int* y = (int*) malloc(sizeof(int)); 

*y= 20;

int z = sizeof(int);

printf("\ny*=%i\nz=%i\n", *y,z);
*/
 
 // segunda vez, porém agora com mais coisa :
 
 
int main(){
#define alturaMaxima 225


typedef struct{

int peso;
int altura;

}  PesoAltura;

PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));

pessoa1->peso=63;
pessoa1->altura = 173;

printf("Peso: %i,\nAltura: %i", pessoa1->peso, pessoa1->altura);

if(pessoa1->altura >= alturaMaxima){
    printf("\naltura acima da permitida");
}else{
    printf("\naltura permitida");
}
    return 0;
}


// int x; significa que x é um variavel do tipo "inteiro"


// int* y; significa que y é uma variável do tipo "endereço para um inteiro"