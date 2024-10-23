#include <bits/stdc++.h>
using namespace std;
string ReadString() {
    string s1;
    cout <<  "Please enter your String\n";
    getline(cin,s1);
    return s1;
}
string UpperFirstLetterOfEachWord(string s) {
    bool isFirstLetter = true;
    for (int i = 0;i<s.length();i++) {
        if(s[i]!=' ' && isFirstLetter) {
            s[i]=toupper(s[i]);
        }
        isFirstLetter = (s[i]==' ' ? true : false);
    }
    return s;
}
int main()
{
    string s = ReadString();
    cout << "\nString after conversion\n";
    s = UpperFirstLetterOfEachWord(s);
    cout << s << endl;
}
