#include<stdio.h>
 void main(){
 	int i;
 	int j;
 	int sum=0;
 	int a[3][3];
printf("Enter the Elements: \n");
 
 for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
 }

 for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
	   if(i==j || i+j==2){
	   	sum=sum+a[i][j];
	   }	
	}
 }
 printf("The sum of diagonal elements is: %d",sum);
}
