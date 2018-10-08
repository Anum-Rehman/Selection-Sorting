#include<stdio.h>
#define N 7
void Selection_Sort(int A[N],int n);

main(){
	int A[N];
	printf("Enter only 7 values to sort:\n");
	for(int m=0;m<N;m++){
		scanf("%d",&A[m]);
	}
	int i,j,l,k,min,temp;
	printf("\n\n");
 for(k=0;k<N;k++){
		printf("%d\t",A[k]);
	}
	for(i=0;i<N;i++){
		min=i;
		int flag=0;
		for(j=i+1;j<N;j++){
			if(A[j]<A[min]){
				min=j;
			}
		}
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
			if(flag==0)
			break;
 }
	printf("\n\n");
	for(l=0;l<N;l++){
	    printf("%d\t",A[l]);
}
}


