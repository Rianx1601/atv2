#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int x, z;
	
	printf("analista da promoção\n");
	
	printf("informe sua idade");
	scanf("%d", &x);
	printf("informe sua idade");
	scanf("%d", &z);
	
	if(x%2 == 0){
		printf("desconto");
	}
return 0;	
}
