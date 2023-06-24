#include<stdio.h>
 void main(){
 	int i;
 	int j;
 	int a[3][3];
 	int b[3][3];
 	int c[i][j];
printf("Enter the Elements of A: \n");
 for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
 }
printf("Enter the Elements of B: \n");
 for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("b[%d][%d]: ",i,j);
		scanf("%d",&b[i][j]);
    }
 }
 for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		c[i][j]=a[i][j]+b[i][j];
		printf("Array C is: %d \n",c[i][j]);
    }
 }
 
}
