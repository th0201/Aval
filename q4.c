#include<stdio.h>

int isPerfect(int n){
	int soma=0, i;
	for(i = 1; i < n; i++){
		if(n % i == 0){
			soma += i;
		}
	}
	if(soma == n){
		printf("%d eh um numero perfeito!\n", n);
		}
		
}

int main(){
	int n, i;
	
	for(i = 1; i <= 1000; i++){
		isPerfect(i);
	}
		
}