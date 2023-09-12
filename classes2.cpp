#include <bits/stdc++.h>

using namespace std;

class binary
{
    string s;

    public:
        void read(void);
        void chk_bin(void);
        void onescompliment(void);
        void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}

void binary::chk_bin(void){
    for(int i=0; i < s.length() ; i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary::onescompliment(void)
{
    chk_bin();
    for(int i=0; i < s.length() ; i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number :- "<<endl;
    for (int i=0;i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


//          MAIN FUNCTION STARTS
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.onescompliment();
    b.display();
    return 0;
}