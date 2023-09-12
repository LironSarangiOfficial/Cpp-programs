#include<bits/stdc++.h>
using namespace std;

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


int main(){

	// int n; cin >> n;

	// int arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> arr[i];
	// }

	// // for(int x: arr)
	// // {
	// // 	cout << x << ", ";
	// // }

	// BubbleSort(arr,n);
	// cout << endl;
	// for(int x: arr)
	// {
	// 	cout << x << " ";
	// }

	// string name;
	// getline(cin,name);
	// cout << name << endl;
	return 0;
}