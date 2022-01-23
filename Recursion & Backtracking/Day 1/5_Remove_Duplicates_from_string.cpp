#include<bits/stdc++.h>
using namespace std;
void clrdup(string &str){
    if (str.length()==1)
    {
        return;
    }
    char temp=str.back();
    str.pop_back();
    clrdup(str);
    if (str.find(temp)==string::npos)
    {
        str.push_back(temp);
    }
    
}
int main(){
    system("clear");
    string s="AKSHAT";
    cout<<s<<endl;
    clrdup(s);
    cout<<s<<endl;
    return 0;
}