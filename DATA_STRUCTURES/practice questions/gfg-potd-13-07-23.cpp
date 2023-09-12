/*
Given an array arr of N integers, the task is to check whether the frequency of the elements in the array is unique or not. Or in other

words,there are no two distinct numbers in array with equal frequency. If all the frequency is unique then return true, else return false.
*/

// SOLVED

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        if (n==1) return true;
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[arr[i]] = freq[arr[i]]+1;
        }
        vector<int> count;

        for(auto &pr: freq){
            auto iter = find(count.begin(),count.end(),pr.second);
            if ( iter == count.end()){
                count.push_back(pr.second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};


int main(){
    Solution obj1;
    int arr[] = {2, 2, 5, 10, 1, 2, 10, 5, 10, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << (bool)obj1.isFrequencyUnique(n,arr);

    return 0;
}