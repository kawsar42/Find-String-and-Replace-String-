#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{

}
int main()
{
    int t;

    string s;
    char c;
    cin >> c;
    getline(cin,s);
    s=c+s;

    //s.erase(a,b);
    cout << s.back() << endl;
    int fnd=s.find("ar");
    cout << fnd << endl;
    s.replace(fnd,2,"hi");
    cout << s << endl;

   // cout << s.at(4) << endl;
   // s.clear();
    //cout << s << endl;
}
