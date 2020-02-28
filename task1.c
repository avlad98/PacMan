#include <stdio.h>

int main(){

	int dimensiune, linie;
	char caracter;

	scanf("%d %c", &dimensiune, &caracter);

	for(linie=0; linie<dimensiune; linie++){
		int spatiu=linie, display=dimensiune-linie;
		while(spatiu>0){
			printf("  ");
			--spatiu;
		}
	
		while(display>0){
			
			if(display==1){
			printf("%c", caracter);
			--display;
			}
			else
			{
			printf("%c ", caracter);
			--display;
			}
		}

		printf("\n");			
	}

	return 0;
}
