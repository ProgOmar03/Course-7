#include <bits/stdc++.h>
using namespace std;
string ReadString() {
    string s;getline(cin,s);return s;
}
short CountWrods(string s) {
    string delim = " ";
    short Counter = 0;
    short pos = 0;
    string sword;
    while ((pos=s.find(delim))!=std::string::npos) {
        sword = s.substr(0,pos);
        if(!sword.empty()) {
            Counter++;
        }
        s.erase(0,pos+delim.length());
    }
    if(!s.empty())
    Counter++;
    return Counter;
}
int main()
{
   string s = ReadString();
    cout << "\nNumber of words : " << CountWrods(s);
}
