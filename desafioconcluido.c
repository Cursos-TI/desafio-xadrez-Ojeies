#include <stdio.h>
void movertorre(int i){
    if(i > 0) {

        printf("Direita →\n");
        movertorre( i - 1);
    }

}
void moverbispo(int j){
    while(j--){
        for(int j = 0; j < 1; j++){
            printf("Cima ↑\n");
        } 
        printf("Direita → \n");
        
    }
}
void moverrainha(int k){
    if( k > 0) {

        printf("Esquerda ←\n");
        moverrainha( k - 1);
    }

}

int main(){
int cavalo = 1;
    printf("Movimento das peças\n");
    
    printf("Torre:\n");
    movertorre(5);
    printf("A Torre se moveu 5 casas para a direita.\n\n");
    printf("Bispo:\n");
    moverbispo(5);
    printf("O Bispo se moveu 5 vezes na diagonal, para cima e pra direita.\n\n");
    printf("Rainha\n");
    moverrainha(8);
    printf("A Rainha se moveu 8 casas para a esquerda.\n\n");
    printf("Cavalo:\n");

    while(cavalo--){
        for(int l = 0; l < 2; l++){
            printf("Cima ↑\n");
        } 
        printf("Direita →\n");
        
    }
    printf("O Cavalo se moveu duas casas para cima e uma para a direita.\n");
}