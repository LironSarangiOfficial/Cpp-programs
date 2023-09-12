void BubbleSort(int A[], int n){
	int count=1;
	while (count<n){
		for(int i=1;i<n-count+1;++i)
		{
			if(A[i-1] > A[i]){
				int temp = A[i-1];
				A[i-1] = A[i];
				A[i] = temp;
			}
		}
		count++;
	}
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}