#include <bits/stdc++.h>
using namespace std;
string lookAndSaySequence(int n) 
{
    if(n==1)
    {
        return "1";
    }
    string out="";
    string s=lookAndSaySequence(n-1);
    int num,i;
    while (!s.empty())
    {
        num=(int)s[0];
        i=48;
        while (num==s[0])
        {
            s.erase(s.begin());
            i++;
        }
        out.push_back((char)i);
        out.push_back((char)num);
    }
    return out;
}
int main()
{
    for (int i = 1; i < 10; i++)
    {
        cout<<lookAndSaySequence(i)<<endl;
    }
    return 0;
}
