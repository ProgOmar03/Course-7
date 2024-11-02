#include<bits/stdc++.h>
using namespace std;
string ReadString() {
    string s;getline(cin,s);return s;
}
string RemovePunctuationsFromString(string S1) {
    string S2="";
    for (short i = 0;i<S1.length();i++) {
     if(!ispunct(S1[i])) {
         S2 +=S1[i];
     }
    }
    return S2;
}
int main()
{
    cout << RemovePunctuationsFromString(ReadString());
}
