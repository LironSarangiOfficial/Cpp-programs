
/*
«One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.

However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

Input
Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 10^5).

Output
Output the number of damaged dragons.
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,l,m,n,d;
	cin >> k >> l >> m  >> n >> d;
	map<int, int> dragons;
	map<int, int> :: iterator iter;
	for(int i=1; i <= d; ++i)
	{
		dragons[i] = 1;
	}
	for(iter = dragons.begin(); iter != dragons.end() ; ++iter)
	{
		if ((iter->second) == 1){
			auto x = iter->first;
			if((x%k==0) || (x%l==0) || (x%m==0) || (x%n==0))
				dragons[x] = 0;
		}
	}
	int c =0;
	
	for(auto pr: dragons)
	{
		if (pr.second == 0)
			c++;
	}
	cout << c << endl;

	return 0;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,countA=0,countD=0;char w;
	cin >> n;
	while(n--)
	{
		cin >> w;
		if (w == 'A') countA++;
		else if (w == 'D') countD++;
	}

	if (countA > countD) cout << "Anton\n";
	else if (countA < countD) cout << "Danik\n";
	else cout << "Friendship\n";

	return 0;
}
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	set<int> people_in_train;
// 	int n,a,b,curr=0; cin >> n;
// 	while(n--)
// 	{
// 		cin >> a >> b;
// 		curr += b-a;
// 		people_in_train.insert(curr);
// 	}
// 	auto iter = --people_in_train.end();
// 	cout << *iter << endl;
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	// string s1 = "The quick brown fox jumped over the lazy dog";
// 	// cout << s1 <<endl;
// 	// s1 = s1.erase(4,6);
// 	// cout << s1 <<endl;

// 	// string s2 = "uavqrwstzfbxghyijcklmnodpe";
// 	// sort(s2.begin(),s2.end());
// 	// sort(s2.begin(),s2.end());
// 	// cout << s2 <<endl;

	

// 	// char a = ;
// 	// typeid(a);

// 	// for(char a: s2)
// 	// {
// 	// 	cout << a << "-";
// 	// }

// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	string s,t;
// 	cin >> s >> t;
// 	reverse(t.begin(),t.end());
// 	if (s.length() != t.length()) cout << "NO\n";
// 	if (t == s){
// 		cout << "YES\n";
// 	}else{
// 		cout << "NO\n";
// 	}

// 	return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int *ptr;
// 	ptr = (int*)malloc(10*sizeof(int));
// 	cout << sizeof(*ptr) << endl;
// 	// cout << *ptr << endl;
// 	ptr = (int*)realloc(ptr,20*sizeof(int));

// 	if (ptr == NULL){
// 		cout << "Memory re-allocation failed\n";
// 		return 0;
// 	}
// 	cout << sizeof(*ptr) << endl;
// 	// cout << *ptr << endl;
// 	return 0;
// }


//Author:  Asutosha Sarangi
/*
#include <iostream>

using namespace std;
const int MAX = 3;
const int MAX1 = 4;
int main ()
{
    int *ptr;
    int arr[] = {10,20,30,40,50,60};
    int arrSize = *(&arr + 1) - arr;
    cout << "The length of the array is: " << arrSize<< endl;
    // let us have array address in pointer.
    ptr = arr;
    //ptr = (int*)malloc(arrSize);
    cout << "Array  Address : " << &arr << endl;
    cout << "Array  Address through pointer(point 0 th Element) : " << ptr << endl;
    cout << " Array Value  1st Element   : " << *ptr  << endl;
    cout << "Array  Address through pointer(point 2nd th Element) : " << ++ptr << endl;
    cout << " Array Value  2nd Element   : " << *++ptr  << endl;
    cout << "Pointer ptr Next Address : " << ptr+1 << endl;
    cout <<"Size of pointer(integer) Always 8 : "<< sizeof(ptr) << endl;
    //https://www.educative.io/answers/how-to-find-the-length-of-an-array-in-cpp
    cout << "Array count/size Can be calculate =( Total size /each size) :"<<sizeof(arr)<<"/"<<sizeof(arr[0])<<"=" << sizeof(arr)/sizeof(arr[0]);
    cout  <<endl<<"------------Malloc, Realloc---------------------------"<<endl;
// allocate memory of int size to an int pointer
    cout<<"Calculating Size:"<<(arrSize*2)*sizeof(int)<<" Byte"<<endl;
    ptr = (int*) malloc((arrSize*2)*sizeof(int)); //memory block in bytes

    if (!ptr) {
        cout << "Memory Allocation Failed to Pointer ptr";
    } else {
        cout << "Pointer pointing new Address : " << ptr << endl;
        cout <<"Size of ptr:"<< sizeof(ptr) << endl;
        cout << "Value  1st Element( Value)  : " << *ptr  << endl;
    }

    cout<<"Array Size :"<<arrSize<<endl;
    cout<<"Re alocate (arrSize*sizeof(int))= 6*8=48 byte & point  1st element "<<endl;
    ptr = (int*)realloc(ptr,arrSize*sizeof(int));

    cout<<"Again size will be same 8 asit point to 1st element of integer array :" << sizeof(ptr) << endl;
    cout<<"Free pointer";
    free(ptr);

    cout<<endl<<"---------------------String-----------------------------------"<<endl;
    const char *names[MAX1] = { "Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali" };

    for (int i = 0; i < MAX1; i++) {
        cout << "Value of names[" << i << "] = "<< (names + i) <<":";
        cout << "Names in Address  :"<< (names + i)<<"="<< *(names + i) << endl;
    }

    return 0;

}
*/


/*
The length of the array is: 6
Array  Address : 0x7ffd213e24f0
Array  Address through pointer(point 0 th Element) : 0x7ffd213e24f0
 Array Value  1st Element   : 10
Array  Address through pointer(point 1 th Element) : 0x7ffd213e24f4
 Array Value  2nd Element   : 30
Pointer ptr Next Address : 0x7ffd213e24fc
Size of pointer(integer) Always 8 : 8
Array count/size Can be calculate =( Total size /each size) :24/4=6
------------Malloc, Realloc---------------------------
Calculating Size:48 Byte
Pointer pointing new Address : 0x558c2ddd92c0
Size of ptr:8
Value  1st Element( Value)  : 0
Array Size :6
Re alocate (arrSize*sizeof(int))= 6*8=48 byte & point  1st element 
Again size will be same 8 asit point to 1st element of integer array :8
Free pointer
---------------------String-----------------------------------
Value of names[0] = 0x7ffd213e2510:Names in Address  :0x7ffd213e2510=Zara Ali
Value of names[1] = 0x7ffd213e2518:Names in Address  :0x7ffd213e2518=Hina Ali
Value of names[2] = 0x7ffd213e2520:Names in Address  :0x7ffd213e2520=Nuha Ali
Value of names[3] = 0x7ffd213e2528:Names in Address  :0x7ffd213e2528=Sara Ali

*/



// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld long double
// #define mp make_pair
// #define pb push_back
// #define eb emplace_back
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define mii map<int, int>
// #define si set<int>
// #define vpii vector<pii>
// #define f(i, a, b) for (auto i = a; i < b; ++i)
// #define fd(i, a, b) for (auto i = a; i >= b; --i)
// #define cnl(c) cout << c << "\n";

// void solve()
// {
// 	int n,k,v; cin >> n >> k >> v ;
// 	vi arr(n);
// 	for(int i=0;i<n;++i)
// 	{
// 		int x; cin >> x;
// 		arr.pb(x);
// 	}
// 	float restsum = (n+k)*v - (accumulate(arr.begin(),arr.end(),0));
// 	if (restsum%k == 0) cnl(restsum/k);
// 	else cnl(-1);
// }

// int main()
// {
// 	int tc=1;
// 	cin>>tc;
// 	while(tc--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld long double
// #define mp make_pair
// #define pb push_back
// #define eb emplace_back
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define mii map<int, int>
// #define si set<int>
// #define vpii vector<pii>
// #define f(i, a, b) for (auto i = a; i < b; ++i)
// #define fd(i, a, b) for (auto i = a; i >= b; --i)
// #define cnl(c) cout << c << "\n";

// void solve()
// {
// 	stack<int> stk;
// 	stk.push(10);
// 	stk.push(20);
// 	stk.push(30);
// 	stk.push(40);
// 	stk.push(50);
// 	stk.push(60);

// 	while(!stk.empty()){
// 		cout << stk.top() << endl;
// 		stk.pop();
// 	}
// }

// int main()
// {
// 	int tc=1;
// 	cin>>tc;
// 	while(tc--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define vpii vector<pii>
#define f(i, a, b) for (auto i = a; i < b; ++i)
#define fd(i, a, b) for (auto i = a; i >= b; --i)
#define cnl(c) cout << c << "\n";

void solve()
{
    
}

int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}