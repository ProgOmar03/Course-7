#include <bits/stdc++.h>
using namespace std;
string TrimLeft(string s) {
        for (short i = 0;i<s.length();i++) {
                if(s[i]!=' ') {
                        return s.substr(i,s.length()-1);
                }
        }
        return "";
}
string TrimRight(string s) {
        for (short i = s.length()-1;i>=0;i--) {
                if (s[i]!=' ') {
                        return s.substr(0,i+1);
                }
        }
        return "";
}
string Trim(string s) {
        return (TrimRight(TrimLeft(s))); // It could be also : return (TrimLeft(TrimRight(s)));
}
int main() {
        string s = "               Omar Jaghoob           ";
        cout << Trim(s) << endl;
}
