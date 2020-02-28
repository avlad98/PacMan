#include <stdio.h>

void tabla(int N, int M, int x, int y, char caracter){
	int i, j;
	for(i = 0; i <= N+1; i++){
	
		if(i == 0 || i == N+1){
			for(j = 0; j <= M+1; j++){
				printf("*");
			}
			printf("\n");
		}else{
			printf("*");
			for(j = 1; j < M+1; j++){
				
				if(y == i && x == j){
					printf("%c", caracter);
				}
				else{
					printf(" ");
				}
			}
			printf("*\n");
		}
	
	}	

}

int main(){
	int N, M, x , y, P;
	char caracter='v', key;
	scanf("%d%d%d%d%d", &N, &M, &x, &y, &P);
	
	if(!(1 <= y && y <= N && N <= 80) || !(1 <= x && x <= M && M <= 80)){
		return 0;
	}
	
	tabla(N, M, x, y, caracter);
	for(;;){
		scanf(" %c", &key);
		switch(key){
			case 'w':
				if(y == 1){
					tabla(N, M, x, y, caracter);
				}
				else{
					caracter = '^';
					--y;
					tabla(N, M, x, y, caracter);
				}
				break;
			case 's':
				if(y == N){
					if(x == M){
						printf("GAME COMPLETED\n");
						return 0;
	
					}
					else{
					tabla(N, M, x, y, caracter);
					}
				}
				else{
					caracter = 'v';
					++y;
					tabla(N, M, x, y, caracter);
				}
				break;
			case 'd':
				if(x == M){
					if( y == N){
						printf("GAME COMPLETED\n");
						return 0;
					}
					else{
						tabla(N, M, x, y, caracter);
					}
				}
				else{
					caracter = '>';
					++x;
					tabla(N, M, x, y, caracter);
				}
				break;
			case 'a':
				if(x == 1){
					tabla(N, M, x, y, caracter);
				}
				else{
					caracter = '<';
					--x;
					tabla(N, M, x, y, caracter);
				}
				break;
			case 'q':
				return 0;
			default:
				return 0;
		}
	}
	return 0;
}
