#include <bits/stdc++.h>
using namespace std;
string ReadString() {
    string s; getline(cin,s);return s;
}
enum enWhatToCount{SmallLetter=0,CapitalLetter=1,All = 3};
short CountLetters(string s,enWhatToCount WhatToCount=enWhatToCount::All) {
    if(WhatToCount==enWhatToCount::All) {
        return s.length();
    }
    short Counter = 0;
    for (short i =0;i<s.length();i++) {
        if(WhatToCount==enWhatToCount::CapitalLetter && std::isupper(s[i])) {
            Counter++;
        }
        if (WhatToCount==enWhatToCount::SmallLetter && islower(s[i])) {
            Counter++;
        }
    }
    return Counter;
}
int CountSmallLetters(string s) {
    int Count = 0;
    for(int i = 0;i<s.length();i++) {
        if(std::islower(s[i]))
            Count++;
    }
    return Count;
}
int CountCapitalLetters(string s) {
    int Count = 0;
    for (int i = 0;i<s.length();i++) {
        if(std::isupper(s[i])) {
            Count++;
        }
    }
    return Count;
}
int main()
{
    string s = ReadString();
    cout << "\nMethod1\n";
    cout <<"String length =  "<<s.length()<< endl;
    cout << "Capital Letters Count : " << CountCapitalLetters(s)<< endl;
    cout << "Small Letters Count : " << CountSmallLetters(s)<< endl;
    cout << "\nMethod2\n";
    cout <<"String length =  "<<CountLetters(s) << endl;
    cout << "Capital Letters Count : " << CountLetters(s,enWhatToCount::CapitalLetter)<< endl;
    cout << "Small Letters Count : " << CountLetters(s,enWhatToCount::SmallLetter)<< endl;
}
