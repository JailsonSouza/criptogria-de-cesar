/*
    O código de cesar é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição
    no qual cada letra de um texto é substituida por outra, que se apresenta n posições após ela no alfabeto.
    Por exemplo, com uma troca de três posições; a letra A seria substituida por D, B se tornaria E e assim 
    por diante. Escreva um programa que faz o uso desse código de Cesar para três posições. Entre com uma
    string e imprima a string codificada. Exemplo: String: "a ligeira raposa marrom saltou sobre o cachorro
    cansado"; Nova string: "d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr". 
*/
#include <stdio.h>
#include <math.h>

int main() {
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char frase[100], novafrase[100], i;
    int contFra=0, contAlf = 26, cont1, cont2, aux;

    printf("Informe a frase a ser criptografia: ");
    scanf("%[^\n]", frase);

    for(i = 0; frase[i] != '\0'; i++){
        contFra += 1;
    }
    printf("Cont: %d\n", contFra);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"); 
    printf("%s\n", frase);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"); 

    for (cont1 = 0; cont1 < contFra; cont1++){
        if (frase[cont1] == ' '){
                printf("%c", ' ');
        }else{
            for (cont2 = 0; cont2 < contAlf; cont2++){
                if(frase[cont1] == alfabeto[cont2]){
                    aux = cont2 + 3;
                    novafrase[cont2] = alfabeto[aux];
                    printf("%c", novafrase[cont2]);
                }
            }
        }
    }
    printf("\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"); 
    return 0;
}
