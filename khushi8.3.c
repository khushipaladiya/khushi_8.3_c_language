#include<stdio.h>
void main(){
	int i;
	int j;
	float sum=0;
	int a[3][3];
printf("Enter the elements: \n");

  for(i=0;i<=2;i++){
  	for(j=0;j<=2;j++){
  		printf("a[%d][%d]: ",i,j);
  		scanf("%d",&a[i][j]);
	  }
  }	
  for(i=0;i<=2;i++){
  	for(j=0;j<=2;j++){
  		sum+=a[i][j];
	  }
  }
  printf("Average is: %f",sum/9);
}
