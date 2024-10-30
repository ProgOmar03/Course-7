#include <bits/stdc++.h>
using namespace std;
char ReadChar() {
    char c;
    cout << "Please enter a character : \n";
    cin>>c;
    return c;
}
string ReadString() {
    string s;getline(cin,s);return s;
}
bool IsVowel(char c) {
    c = tolower(c);
    return ((c =='a')||(c =='e')||(c == 'o')||(c == 'u')||(c == 'i'));
}
short CountVowels(string s) {
    short Counter = 0;
    for (short i =0;i<s.length();i++) {
        if(IsVowel(s[i])) {
            Counter++;
        }
    }
    return Counter;
}
void PrintVowels(string s) {
    cout << "\nVowels in string are: \n";
    for (short i = 0;i<s.length();i++) {
        if(IsVowel(s[i])) {
            cout << s[i] << "      ";
        }
    }
}
void PrintEachWordInString(string s) {
    string delim = " ";
    cout << "\nYour string words are:\n";
    short pos = 0;
    string sword;
    while ((pos=s.find(delim))!=std::string::npos) {
        sword = s.substr(0,pos);
        if(!sword.empty()) {
            cout << sword << endl;
        }
        s.erase(0,pos+delim.length());
    }
   if(!s.empty()) {
       cout << s << endl;
   }
}
int main()
{
    string s = ReadString();
    PrintEachWordInString(s);
    cout << "";

}
