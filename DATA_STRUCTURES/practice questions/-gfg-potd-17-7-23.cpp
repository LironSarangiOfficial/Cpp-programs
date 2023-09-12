/*  NOT SOLVED!!
Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has 

appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to

appear. If there is no such character then append '#' to the answer.


Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'

*/

#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A){
    vector<char> nrchar;
    char fnr = A[0];
    string ans;
    for(auto iter = A.begin();iter != A.end();iter++){
        if (find(nrchar.begin(),nrchar.end(),*iter) == nrchar.end()){
            nrchar.push_back(*iter);
        }
    }

    for(auto iter = A.begin();iter != A.end();iter++){
        
    }
    return A;
}


int main(){
    string str1 = "abcaabbabbcc";
    cout << FirstNonRepeating(str1) << endl << str1;
    return 0;
}