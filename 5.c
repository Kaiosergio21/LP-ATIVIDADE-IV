#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[100]; 
    char cargo[100];

    float salario[10];
};

float somar(struct aluno a[]) {
    int i;
    float soma = 0;  
    
    for (i = 0; i < 3; i++) {
        soma += a[i].salario[0];
        
       
    }
    
    return soma;
}

float calculos(float soma) {

    int i;
     float media;
    
    for (i = 0; i < 3; i++) {
        
          media = soma/3;
          
             
       
    }
    
    return media;
}



int main() {
    struct aluno a[5];
    int i,j;
    float soma = 0;  
    float media = 0;
    
    for (i = 0; i < 3; i++) {
        printf("nome: ");
        scanf("%s", &a[i].nome); 

        printf("cargo: ");
        scanf("%s", &a[i].cargo);
     
        
    
            printf("salÃ¡rio: ");
            scanf("%f", &a[i].salario[0]);  
            soma += a[i].salario[0];
        
        
       
    }

     printf("%f",soma);
        
        
        media = calculos(soma);
        
        printf("MÃ©dia: %.1f\n", media); 
        
       
         media = 0;  

printf("\nprogramador\n");;
      
    for (i = 0; i < 3; i++) {
        printf("nome: ");
        scanf("%s", a[i].nome); 

        printf("cargo: ");
        scanf("%s", a[i].cargo);
     
        
    
            printf("salÃ¡rio: ");
            scanf("%f", &a[i].salario[0]);  
            soma += a[i].salario[0];
        
    }

    
        
        printf("%f",soma);
        
        
        media = calculos(soma);
        
        printf("MÃ©dia: %.1f\n", media); 
        
       
         media = 0;  


    return 0;
}
