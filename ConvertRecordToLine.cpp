#include<bits/stdc++.h>
using namespace std;
struct  stClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
stClient ReadNewClient() {
    stClient Client;
    cout << "Enter Account Number? ";
    getline(cin,Client.AccountNumber);
    cout << "Enter PinCode? ";
    getline(cin,Client.PinCode);
    cout << "Enter Name? ";
    getline(cin,Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;
    return Client;
}
string ConvertRecordToLine(stClient Client, string Seperator="#//#") {
    string stClientRecord = "";
    stClientRecord += Client.AccountNumber+Seperator;
    stClientRecord += Client.PinCode+Seperator;
    stClientRecord += Client.Name+Seperator;
    stClientRecord += Client.Phone+Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}
int main()
{
cout << "\nPlease enter client data\n";
    stClient Client;
    Client = ReadNewClient();
    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(Client);
}
