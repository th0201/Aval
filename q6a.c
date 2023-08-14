#include<stdio.h>

int inverte(int n, int num){
	if(n >= 0){
		do{
			num = n % 10;
			printf("%d", num);
			n /=10;
		}while(n != 0);
		printf("\n");
	return (num);
	}
	}
	
	int main(){
	int n, num, inversao;
	
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	inversao = inverte(n, num);
	
}