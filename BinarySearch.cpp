int B_search(int arr[],int n,int key){
	int start=0,end=n,mid=(start+end)/2;
	while(start<=end){
		mid=(start+end)/2;
		if (arr[mid]==key) 
			return mid;

		else if(arr[mid] > key)
			end = mid-1;

		else 
			start = mid+1;
	}
	return -1;
}