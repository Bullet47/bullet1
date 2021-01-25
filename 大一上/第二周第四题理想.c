#include <stdio.h>
#include <string.h>
int main() {
	int r, c, i, n,k;
	scanf("%d %d",&r,&c);
	int f[r + 1][c + 1];
	for(i = 0; i < r; i++){
		for(n = 0; n <= c-1; n++){
			scanf("%d", &f[i][n]);
		}
	}
	int t, s, l, middle, m, ii;
	scanf("%d",&t);
	getchar(); 
	char row[20], x[20];	
		for(m = 0; m < t; m++){
			fgets(row,201,stdin);
			sscanf(row,"%s",x);
			sscanf(row,"%*s %d %d", &s, &l);
		
		if(strcmp(x, "SR") == 0){
		for( k = 0; k < c; k++){
			middle = f[s - 1][k];
			f[s - 1][k] = f[l - 1][k];
			f[l - 1][k] = middle;
		}
	}	
		if(strcmp(x, "SC") == 0){
			for( k = 0; k < c; k++){
				middle = f[k][s - 1];
				f[k][s - 1] = f[k][l - 1];
				f[k][l - 1] = middle;
		}
	}	
		if(strcmp(x, "DR") == 0){
			int k;
			for(i = 0,ii = 0; i < r; ii++,i++){
				if(i == s - 1 ){
					i++;
				}
			for(k = 0; k < c; k++){
				f[ii][k] = f[i][k];
			}
			
			}
			if(i == r){
				r = r - 1; 
		}
	}
		if(strcmp(x, "DC") == 0){
			int k;
			for(i = 0,ii = 0; i < c; ii++,i++){
				if(i == s - 1 ){
					i++;
				}
			for(k = 0; k < r; k++){
				f[k][ii] = f[k][i];
			}
			
			}
			if(i == c){
				c = c - 1;
		}
	}
		if(strcmp(x, "IR") == 0){
			r = r + 1;
			int k;
			for(i = r - 1,ii = r - 2; ii > 0; ii--,i--){
				if(i == s - 1){
					break;
				}
			for(k = 0; k < c; k++){
				f[i][k] = f[ii][k] ;
			}
		}
		for(k = 0; k < c; k++){
				f[s - 1][k] = 0;
			}	
	}
		if(strcmp(x, "IC") == 0){
			c = c + 1;
			int k;
			for(i = c - 1,ii = c - 2; ii > 0; ii--,i--){
				if(i == s - 1){
					break;
				}
			for(k = 0; k < r; k++){
				f[k][i] = f[k][i] ;
			}
		}
		for(k = 0; k < r; k++){
				f[k][s - 1] = 0;
			}	
	}

}
	for(i = 0; i < r; i++){
		for(n = 0; n < c; n++){
			printf("%d ", f[i][n]);
		}
			printf("\n");
	}
	return 0;
}
