#include<stdio.h>
int main(){
	int i,j,k,m[100][100],r,c;
	printf("Please enter number of rows and coloumn for matrix");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Please enter element at %dx%d",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<r;i++){
for(j=0;j<c;j++){
	for(k=0;k<c;k++){
		if(m[i][j]<m[i][k] && m[i][j]>m[k][j]){
			printf("The saddle point is %d",m[i][j]);
		}
	}
}
}}