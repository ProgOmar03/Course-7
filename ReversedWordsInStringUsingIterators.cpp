#include <bits/stdc++.h>
using namespace std;
string ReadString() {
    string s;getline(cin,s);return s;
}
vector<string> SplitString(string s,string delim) {
    short pos = 0;
    string sWord;
    vector<string>vString;
    while ((pos=s.find(delim))!=std::string::npos) {
        sWord = s.substr(0,pos);
        if(sWord!="") {
            vString.push_back(sWord);
        }
        s.erase(0,pos+delim.length());
    }
    if(s!="") {
        vString.push_back(s);
    }
return vString;
}
    string ReverseWordsInString(string s) {
    vector<string>vString;
    string s2 ="";
    vString = SplitString(s," ");
    vector<string>::iterator iter = vString.end();
    while (iter!=vString.begin()) {
        --iter;//
        s2+=*iter + " ";//
    }
    s2=s2.substr(0,s2.length()-1);
    return s2;
}
int main() {
     string s1 = ReadString();
     cout << "\n\nString after reversing words: \n";
     cout << '\n'<< ReverseWordsInString(s1);
}
