#include <stdio.h>

int multiplica(int x1, int x2){
	
	if(x1 == 0 || x2 == 0){
		return(0);
	}
	else if(x1 == 1){
		return(x2);
	}
	else{
		return(x2 + multiplica(x1 -1, x2));
	}
}

int main(){
	int resposta, n1, n2;
	
	printf("Digite o valor de x1: ");
	scanf("%d", &n1);
	printf("Digite o valor de x2: ");
	scanf("%d", &n2);
	
	resposta = multiplica(n1, n2);
	
	printf("Y = %d", resposta);
	return(0);
}