#include <bits/stdc++.h>
using namespace std;
string ReadString() {
    string s;getline(cin,s);return s;
}
vector<string>SplitString(string s,string delim) {
    vector<string>vString;
    short pos = 0;
    string sword;
    while ((pos=s.find(delim))!=std::string::npos) {
        sword = s.substr(0,pos);
        if(!sword.empty()) {
            vString.push_back(sword);
        }
        s.erase(0,pos+delim.length());
    }
    if(!s.empty()) {
        vString.push_back(s);
    }
    return vString;
}
int main()
{
vector<string>vString;
    vString = SplitString(ReadString()," ");
    cout << "\nTokens = " << vString.size() << endl;
    for (string &vec:vString) {
        cout << vec << endl;
    }
    system("pause>0");
}
