#include <bits/stdc++.h>
using namespace std;
void permute(vector<string> &v,string &s,int l)
{
    if((s.size()-1)==l)
    {
        v.push_back(s);
        return;
    }
    for(int i=l;i<s.size();i++)
    {
        swap(s[l],s[i]);
        permute(v,s,l+1);
        swap(s[l],s[i]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> v;
    permute(v,s,0);
    return v;
}
int main()
{
    string s="exqc";
    vector<string> v=findPermutations(s);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}