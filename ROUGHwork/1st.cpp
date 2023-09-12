// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     // PRINTING TABLES OF THE INSERTED NUMBER
//     int n;
//     cout<<"Please enter the number whose tables are to be printed :-  ";
//     cin>>n;
//     int c = 1;
//     do
//     {
//         cout<<"The value of c is "<<c<<endl;
//         cout<<n<<" x "<<c<<" = "<<n*c<<endl;
//        .0.... c++;
//     }while(c!=10);
//     return 0;
// }

// int main(){
//     int x[] = {};
//     int* p = x;
//     cout<<p<<endl;
//     x[0]=10;
//     x[1]=20;
//     cout<<p<<endl;
//     p++;
//     cout<<p<<endl;
//     return 0;
// }

// int main(){
//     int n=85;
//     int x=sqrt(n);
//     cout<<(int)sqrt(n)<<endl;
//     cout<<x;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back

void solve()
{
    int n; string s; cin >> n >> s;
    cout << n << "-->" << s << endl;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("_input.txt","r",stdin);
        freopen("_output.txt","w",stdout);
    #endif

    int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}