#include <stdio.h> 
#include <locale.h>

int meni(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int x, z;
	
	printf("analista de desconto");
	
	printf("informe a iadade\n");
	scanf("%d",&x);
	printf("informe a iadade\n");
	scanf("%d",&z);
	
	if(x%2!=0 || z%2!=0){
		printf("desconto");
	}
	return 0;
}
