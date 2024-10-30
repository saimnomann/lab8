#include<stdio.h>
int main(){
    int i,j,start,end,temp=0;
    printf("Please tell the starting range");
    scanf("%d",&start); //1
    printf("Please tell the ending range");
    scanf("%d",&end); //5
    for(i=start;i<=end;i++) 
	{
	    temp=0;
	
        for(j=2;j<i;j++){
            if(i%j==0){
             temp=1;
             break;
            }
        else{
        }
 
        }
if(temp!=1 && i!=1){
    printf("%d ",i);
}  
}
    
}