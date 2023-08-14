#include<stdio.h>

int num;

int inverte(int n){
	
    if(n==0)
      return 0;
     else
    {
     printf("%d", n % 10);
     n = n / 10;
     return inverte(n);
    }
return 0;
 }
int main()
{
   printf("Digite um numero:");
   scanf("%d",&num);
   inverte(num);
  
    return 0;
}