/*
 
 Um programa que receba e processe os dados de cada cédula, emitindo um relatório
 informativo com as seguintes informações:
 -Número de votos de cada um dos três candidatos;
 -O nome do candito vitorioso;
 -O número total de eleitores que compareceram às urnas.
 
 Observações:
 (1) A votação só será encerrada quando foi digitando o número 0 (zero) para encerrar o processo de votação;
 (2) Em caso de empate imprima a seguinte mensagem:
 "VOTAÇÃO EM SEGUNDO TURNO".
 */
 
 #include <stdio.h>
 #include <stdlib.h>

 
 int main()
 {
 	int v=6,c1=0,c2=0,c3=0,c4=0,nul=0;
 	printf("---------------ELEICOES CARIOCAS---------------");
 	while(v!=0)
 	{
 		printf("\n\n 1-Andre \n 2-Carol \n 3-Luiz \n 4-Maria \n 5-Nulo");
 		printf("\n ---------------Selecione o numero do seu candidato e pressione ENTER---------------");
 		scanf("%i",&v);
 		
 		switch(v)
 		{
 			case 0:
 				printf("\n VOTACAO ENCERRADA!");
 				break;
 			
 			case 1:
 				c1=c1+1;
 				printf("Andre - VOTO REGISTRADO!");
 				break;
 				
 			case 2:
 				c2=c2+1;
 				printf("Carol - VOTO REGISTRADO!");
 				break;
 				
 			case 3:
 				c3=c3+1;
 				printf("Luiz - VOTO REGISTRADO!");
 				break;
 				
 			case 4:
 				c4=c4+1;
 				printf("Maria - VOTO REGISTRADO!");
 				break;
 				
 			case 5:
 				nul=nul+1;
 				printf("Nulo - VOTO REGISTRADO!");
 				break;
 			
			 default:
			 	printf("CANDIDATO INEXISTENTE!");
				break;
			
			
		 }
	 }
 	   if((c1 > c2)&&(c1 > c3)&&(c1 > c4)&&(c1 > nul)){
 		printf("\n\n ANDRE VENCEU\n");
	 }else 
	  
	  if((c2 > c1)&&(c2 > c3)&&(c2 > c4)&&(c2 > nul)){
	   	printf("\n\n CAROL GANHOOU\n");
	   }else 
	    
		if((c3 > c1)&&(c3 > c2)&&(c3 > c4)&&(c3 > nul)){
	   	printf("\n\n LUIZ GANHOU\n");
	   }else 
	    
		if((c4 > c1)&&(c4 > c2)&&(c4 > c3)&&(c4 > nul)){             
	   	printf("\n\n MARIA GANHOU \n");
	   }else 
	    
		if(c1 = c2){
	   	printf("\n\n VOTACAO EM SEGUNDO TURNO \n");
	   }else 
	    
		if(c1 = c4){
	   	printf("\n\n VOTACAO EM SEGUNDO TURNO \n");
	   }else 
	    
		if(c1 = c3){
	   	printf("\n\n VOTACAO EM SEGUNDO TURNO \n");
	   }else 
	    
		if(c2 = c4){
	   	printf("\n\n VOTACAO EM SEGUNDO TURNO \n");
	   }else 
	    
		if(c2 = c3){
	   	printf("\n\n VOTACAO EM SEGUNDO TURNO \n");
	   }else 
	    
		if(c3 = c4){
	   	printf("\n\n VOTACAO EM SEGUNDO TURNO \n");
	   }
	   
     
 	 	printf("RESULTADOS DA ELEICAO :\n Andre\t %i\n Carol\t %i\n Luiz\t %i\n Maria\t %i\n Nulo\t %i",c1,c2,c3,c4,nul);
 	
 	getchar();
 	printf("\n\n");
 	system("pause");
 	return(0);
 }
