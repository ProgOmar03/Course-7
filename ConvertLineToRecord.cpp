#include<bits/stdc++.h>
using namespace std;
struct stClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
vector<string> SplitString(string s,string delim) {
    vector<string>vString;
    short pos =0;
    string sWord;
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
stClient ConvertLineToRecord(string Line, string Seprator="#//#") {
    stClient Client;
    vector<string>vClientData;
    vClientData = SplitString(Line,Seprator);
    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name= vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);
    return Client;
}
void PrintClientRecord(stClient Client) {
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccount Number:" << Client.AccountNumber;
    cout << "\nPin Code:" << Client.PinCode ;
    cout << "\nName:" << Client.Name ;
    cout << "\nPhone:" << Client.Phone ;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}
int main()
{
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
    cout << "Line Record :\n";
    cout <<stLine;
    stClient Client = ConvertLineToRecord(stLine,"#//#");
    PrintClientRecord(Client);
    return 0;
}
