#include <stdio.h>
#include <stdlib.h>
    
void imprimir(int* w){

        printf("\nw0: %i, w1: %i, w2: %i\n", w[0], w[1],w[2]);
        printf("&w: %p, w: %p, *w: %i\n", &w,w,*w);
        w[0] = 21;
        w[2] = 23;
        w[1] = 25;
    }


int main(){
    
//    int x[3];
//    x[0]=1;
//    x[1]=2;
//    x[2]=7;

    


    
    //imprimir(x);
    //printf("\nx0: %i, x1: %i, x2: %i",x[0],x[1],x[2]);
    //printf("\n&x: %p, x: %p, *x: %i\n\n",&x,x,*x);

// outra forma de se criar um arrnjo:

int x[3];

x[0] = 1;
x[1] = 2;
x[2] = 7;

int* y = (int*) malloc(sizeof(int)*3);

y[0] = 4;
y[1] = 5;
y[2] = 6;

printf("\ny0: %i, y1: %i, y2: %i\n\n", y[0],y[1],y[2]);

printf("&y: %p, y: %p, *y: %i\n\n", &y,y, *y);

// *y= *x;

free(y);
y = (int*) x;

    return 0;
}


