#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[100]; 
    float nota[2];
    float media;
    char nascimento[100];
};

float somar(struct aluno a[]) {
    int i;
    float soma = 0;  
    
    for (i = 0; i < 5; i++) {
        soma += a[i].nota[0];
        
       
    }
    
    return soma;
}

float calculos(float soma) {

    int i;
     float media;
    
    for (i = 0; i < 5; i++) {
        
          media = soma/5;
          
             
       
    }
    
    return media;
}

void conclusion (float media){


	
	if(media >= 7){
		
		printf("/naprovado");
		
	}else{
		
			printf("/nreprovado");
	}
	

}

int main() {
    struct aluno a[5];
    int i,j;
    float soma = 0;  
    float media = 0;
    
    for (i = 0; i < 5; i++) {
        printf("nome: ");
        scanf("%s", a[i].nome); 
        
          printf("nascimento: ");
        scanf("%s", a[i].nascimento); 
        
        
        for ( j = 0; j < 2; j++) {
            printf("n�mero: ");
            scanf("%f", &a[i].nota[0]);  
            soma += a[i].nota[0];
        }
        
        printf("%f",soma);
        
        
        media = calculos(soma);
        
        printf("M�dia: %.1f\n", media); 
        
       
        
        conclusion(media);
        
         media = 0;  
    }

    return 0;
}

