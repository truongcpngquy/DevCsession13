#include<stdio.h>
int arr[100][100];
void mang( int n,int m){
	for(int i=0;i<n;i++ ){
		for(int j=0;j<m;j++){
			printf("%d",arr[i][j]); 
		} 
		printf("\n"); 
	} 
} 
int main(){
	int n,m;
	printf("Nhap so cot: ");
	scanf("%d",&n);
	printf("Nhap so dong: ");
	scanf("%d ",&m); 
	
	//int arr[n][m];
		for(int i=0;i<n;i++ ){
		for(int j=0;j<m;j++){
			printf("Arr[%d][%d]: ",i,j); 
			scanf("%d",&arr[i][j]); 
		} 
	}
	printf("Mang da nhap la: \n");
	mang( /*arr,*/n, m);
	 return 0; 
} 
