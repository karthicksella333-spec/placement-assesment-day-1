#include<stdio.h>
int main(){
	int num[]={2,7,11,15};
	int target = 9;
	int n = 4;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(num[i]+num[j]==target){
				printf("[%d,%d]\n",i,j);
				return 0;
			}
		}
	}
	return 0;
}
