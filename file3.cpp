#include<bits/stdc++.h>

using namespace std;


int main(){
    int kills;
    const char* x = "This is a string";
    cout<<"Please enter how many people did you kill??   ";
    cin>>kills;
    switch (kills)
    {
    case 10:
        cout<<"You have killed 10 people!! seems like you are dangerous!";
        break;
    default:
        cout<<"I knew you are a chicken-heart!! HaHa!";
        break;
    }
    return 0;
}