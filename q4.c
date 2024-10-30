#include<stdio.h>
int main(){
	int i,j,r1,r2,c1,k,c2,m1[100][100],m2[100][100],temp[100][100]={0},sub[100][100];
	printf("Please enter number of rows and coloumn for matrix 1");
	scanf("%d %d",&r1,&c1);
	printf("Please enter number of rows and coloumn for matrix 2");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2){
		printf("Multiplication not possible");
	}
	else{
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
			printf("Element of matrix 1 at %dx%d:",i,j);
			scanf("%d",&m1[i][j]);
			}
		}
	    for(i=0;i<r2;i++){
	    	for(j=0;j<c2;j++){
	    		printf("Elementof matrix 2 at %dx%d:",i,j);
	    		scanf("%d",&m2[i][j]);
			}
		}
	for(i=0;i<r1;i++) // for i=0 r1=2
	{
		for(j=0;j<c2;j++)//for c2=2
		{
			for(k=0;k<c2;k++){
			temp[i][j]+=m1[i][k]*m2[k][j]; //temp[0][0]=m1[0][1]*m2[1][0]
			}
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",temp[i][j]);
		}
	printf("\n");
	}
printf("\nThe subtraction of matrix result:\n");
 for(i=0;i<r1;i++){
 	for(j=0;j<c2;j++){
 		sub[i][j]=temp[i][j]-m1[i][j];
 		printf("%d ",sub[i][j]);
	 }
	 printf("\n");
 }

	}
}