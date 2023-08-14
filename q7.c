#include<stdio.h>

int matematica(int m, int n){
	if(n == 1){
		return (m + 1);
	} 
	else if(m == 1){
		return (n + 1);
	}
	else
	{
		return matematica(m, n-1)+matematica(m-1,n);
	}
	
}

int main(){
	int n, m, resultado;
	printf("Digite o valor de m: ");
	scanf("%d", &n);
	
	printf("Digite o valor de n: ");
	scanf("%d", &m);
	
	resultado = matematica(n, m);
	printf("%d", resultado);
}