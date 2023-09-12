#include<bits/stdc++.h>
using namespace std;

int intbin(string &s)
{
    int n = 0;
    for (int i=0 ; i < s.length() ; ++i)
    {
        if (s.substr(i,1) == "1")
        {
            n += pow(2,i);
        }
    }
    return n;
}

void solve()
{
    int n,x,ans; string s; cin >> n >> s;

    cout<< "string length: " << n << endl
        << "string: " << s << endl
        << "respective integer: " << intbin(s) << endl
        << "------------X--X--X------------\n";  

}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("_input.txt","r",stdin);    
    //     freopen("_output.txt","w",stdout);    
    // #endif

    int tc=1,c=1;
    cin>>tc;
    while(tc--)
    {
        cout << "Test Case #" << c << ": \n";
        solve();
        ++c;
    }
    return 0;
}
