#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        int j;
        for(j=i+1;j<n;j++){
            if (arr[min] > arr[j]){
                min = j;
            }
        }
        if (min != i) swap(arr[i],arr[min]);
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    display(arr,n);
    SelectionSort(arr,n);
    display(arr,n);
    // int a=4,b=5;
    // cout << a << "  " << b << endl;
    // swap(a,b);
    // cout << a << "  " << b << endl;
    


    return 0;
}