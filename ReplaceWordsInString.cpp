#include <bits/stdc++.h>
using namespace std;
string ReplaceWordInStringUsingBuiltInFunction(string s1,string StringToReplace,string sReplace) {
    short pos = s1.find(StringToReplace);
    while (pos!=std::string::npos) {
        s1 = s1.replace(pos,StringToReplace.length(),sReplace);
        pos = s1.find(StringToReplace);
    }
    return s1;
}
int main() {
    string s1 = "WelcomeTo Jordan, Jordan is a nice country";
    string StringToReplace = "Jordan";
    string sReplace = "Palestine";
    cout << "\nOriginal String\n" << s1;
    cout << "\n\nString After Replace: \n";
    cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(s1,StringToReplace,sReplace);

}
