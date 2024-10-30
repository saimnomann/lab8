#include<stdio.h>
int main(){
	int i,j,rows;
printf("Please enter number of rows");
scanf("%d",&rows);
for(i=0;i<rows;i++){
int x=1;
	for(j=1;j<=rows-i-1;j++){
		printf(" ");
	}
	for(int j=0;j<=i;j++){
printf("%d ",x);

x=x*(i-j)/(j+1);
	}
	printf("\n");
}
 
	
}