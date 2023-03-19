#include <stdio.h>


typedef struct aux {
int cpf;
int idade;
struct aux* conjuge; // conjuge é um ponteiro para "aux", ou seja, para PESSOA

} PESSOA;

void imprimirCPFs(PESSOA p){

    if(p.conjuge != NULL){
        printf("idade : %i x %i\n ", p.idade, p.conjuge->idade);
    }
}

void envelhecer(PESSOA p){
    p.idade++;
}

void envelhecer2(PESSOA* p){
    p->idade++;
}

void envelhercer3(PESSOA p){
    p.conjuge->idade++;
}

void envelhecer4(PESSOA* p){
    p->conjuge->idade++;
}

int main(){
    
    PESSOA pessoa1;
    PESSOA pessoa2;
    PESSOA solteira;

    pessoa1.cpf = 9876543;
    pessoa1.idade = 20;
    
    pessoa1.conjuge = &pessoa2;

    pessoa2.cpf = 123456789;
    pessoa2.idade = 20;

    pessoa2.conjuge = &pessoa1;

    solteira.cpf = 12443353;
    solteira.idade = 20;

    solteira.conjuge = NULL;

//envelhecer(pessoa1);
envelhecer2(&pessoa1);
envelhercer3(pessoa1);
envelhecer4(&pessoa1);


imprimirCPFs(pessoa1);   

    return 0;
}