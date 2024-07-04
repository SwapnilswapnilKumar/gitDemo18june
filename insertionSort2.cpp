//insertionSort
#include<stdio.h>
int main(){
	int arr[6]={9,7,5,3,2,6};
		int n=sizeof(arr)/sizeof(int);

	for(int i=1; i<n;i++){
		int temp=arr[i];
		int j;
		for(j=i-1; j>=0; j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{break;
			}
		}
		arr[j+1]=temp;
	}
	for(int i=0; i<n; i++){
		printf("%d  ",arr[i]);
	}
}
