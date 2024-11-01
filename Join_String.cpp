#include <bits/stdc++.h>
using namespace std;
string JoinString(vector<string>vString,string delim) {
        string s1="";
        for (string &s:vString) {
                s1+= s + delim;
        }
        return s1.substr(0,s1.length()-delim.length());
}
int main() {
        vector<string>vString = {"omar","radi","askar","jaghoob"};
        cout << "\nVector after join: \n";
        cout << JoinString(vString,",");
}
