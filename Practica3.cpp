#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(void){
    printf("1.-suma\n");
    printf("2.-resta\n");
    printf("3.-multiplicacion\n");
    printf("4.-division\n");
    printf("Introduce 1 para sumar\n");
    printf("Introduce 2 para restar\n");
    printf("Introduce 3 para multiplicar\n");
    printf("Introduce 4 para dividir\n");
    int opt;
        scanf("%d",&opt);
        int a;
        int b;
        printf("Introduce la primera cantidad\n ");
        scanf("%d",&a);
        printf("Introduce la segunda cantidad\n ");
        scanf("%d",&b);
        int c;
        if (opt==1){
                c=a+b;}
                else{
                    if (opt==2){
                            c=a-b;

                    }
                    else{
                        if (opt==3){
                            c=a*b;
                        }

                    else{
                    if (opt==4){

                if (b==0){
                    printf("Error\n");
                }
                }

                    else{

                            c=a/b;

                    }
                    }
}

}
        printf("El resultado es %d",c);

        }
