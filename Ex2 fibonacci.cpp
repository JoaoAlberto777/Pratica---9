#include <stdio.h>
#include <locale.h>
	int fibonacci(int n){
  		int x;
  
  			if (n == 1){
    		return 1;
  		    }
			if (n == 2){
    		return 1;
  			}
  
  			x = fibonacci(n-1) + fibonacci(n-2);
  			return x;
}
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
  	    int n,i;
  		printf("Sequ�ncia Fibonacci\n");
  		printf("Digite o N�mero de Termos da Sequ�ancia: ");
  		scanf("%d", &n);
  
  		for (i = 1; i <= n; i++){
    	printf("%d ", fibonacci(i));
  }
  return 0;
}
