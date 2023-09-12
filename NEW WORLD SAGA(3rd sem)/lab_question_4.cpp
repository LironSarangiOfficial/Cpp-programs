#include<iostream>
// #include<cmath>
using namespace std;

class Convert{
    int seconds;
public:
    Convert(){}
    Convert(int sec){
        this->seconds = sec;
    }
    void showTime(){
        int minutes = seconds/60;
        int hours = minutes/60;
        minutes = minutes - 60*hours;
        int sec = seconds - 60*minutes - 3600*hours;
        cout << hours << ":" << minutes << ":" << sec << endl; 
    }
};

int main(){
    int time; cin >> time;
    Convert day(time);
    day.showTime();
    return 0;
}