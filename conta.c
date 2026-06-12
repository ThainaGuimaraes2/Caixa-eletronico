#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


void main(){
	bool loop = true;
	   printf("Boa tarde");

  while(loop);
    int op;
    float valor;
    float saque;
    float emp;
             printf("Digite um numero para processeguir:\n(1)Verificar Saldo\n(2)Depositar valor\n(3)Sacar Valor\n(4)Pedir Emprestimo\n(5)Pagar Emprestimo\n(6)Consultar emprestimo\n(7) sair \n ");
	      scanf("%d",&op);
	 float saldo = 1000;
        switch(op){
		case 1:
		       	printf("Seu saldo atual é:%d \n",saldo);
			loop = false;
			 break;
	        case 2: 
			 printf("Digite o valor que deseja depositar: ");
			 scanf("%d",&valor);
			 valor + saldo;
			 printf("Depositado com sucesso\n Seu saldo atual é de:%d \n",saldo);
			 loop = false;
			 break;
		case 3:
			 printf("Digite o valor que deseja sacar: ");
			scanf("%d",&saque);
			saldo - saque;
			printf("Saque realisado com sucesso\n Seu saldo atual é de: %d \n",saldo);
			loop = false;
			break;
	       case 4:
		       printf("Digite o valor do emprestimo: ");
		       scanf("%d",&emp);
		       emp + saldo;
		       printf("emprestimo realizado com sucesso\n Seu saldo atual é de: %d \n",saldo);
		       loop= false;
		       break;
	       case 5:
		       printf("O valor a ser quitado é de: %d \n",emp);
		       saldo - emp;
		       printf("Emprestimo pago com secesso\n Seu saldo atual é de : %d \n",saldo);
		       loop = false;
		       break;
	       case 6:
		       printf("O valor de emprestimo em seu nome é de: %d \n",emp);
		       loop=false;
		       break;
	       case 7:
		       loop=false;
		       break;

	
	}
    
    
    }




}
