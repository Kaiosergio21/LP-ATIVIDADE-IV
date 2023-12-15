#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 struct telefone{
  	
  	char nome[100];
  	char num[100];
  	
  };
  
  void app (struct telefone a[],char*pesquisar){
  	   
  	   	int i;
  	   int achado = 0;
	
	for(i = 0; i < 2 ;i++){
	
	     if(strcmp(a[i].nome,pesquisar) == 0){
	     	          		
	       	     		
	    
			 printf("\nnome%s\nnï¿½mero%s\n",pesquisar,a[i].num);	
	            
				return;
			 }
			 
			
		  printf("contato nÃ£o encontrado");
		 
		 }

		
	
	}
  	
  	
  
  
 


int main(){
	
	struct telefone a[10];
	
	int i;
	char pesquisar[200];
	
	for(i = 0; i < 2;i++){
		
		printf("nome");
		gets(a[i].nome);
		
		printf("telefone");
		gets(a[i].num);
	}
	
	
	
	do{
		
		printf("pesquisar nome");
	gets(pesquisar);
	
	app(a,pesquisar);
	
	
		
}while( pesquisar != 0 );
	

	
	return 0;
}
