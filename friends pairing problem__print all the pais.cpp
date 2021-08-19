//https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1#

#include <iostream>
using namespace std;

int solve(string input, string output){
    if(input.size() == 0){
        cout << output << " " << endl;;
        return 1;
    }
    int count = 0;
    count += solve(input.substr(1), output + input[0] + " ");

    for(int i = 1; i < input.size(); i++){
        string in = input.substr(1, i-1) + input.substr(i+1);
        solve(in, output + input[0] + input[i] + " ");
    }
    
}
int main()
{
    string s = "abcd";
    solve(s, "");
    return 0;
}
