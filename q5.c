#include<Stdio.h>
int main(){
	int rows,i,k,j;
	printf("Please enter number of rows for upper half of diamond");
	scanf("%d",&rows);
	for(i=0;i<rows;i++){
		for(j=rows-1;j>i;j--){
			printf(" ");
		}
	for(k=0;k<=i;k++){
		printf("* ");
	}
	printf("\n");}
	for(i=0;i<rows-1;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
for(k=rows-1;k>i;k--){
	printf(" *");
}
printf(" \n");
	}
}