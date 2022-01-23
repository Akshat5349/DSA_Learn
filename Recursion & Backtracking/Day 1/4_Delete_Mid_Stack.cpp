#include<bits/stdc++.h>
using namespace std;
void delmid(stack<int> &s,int size){
    if (s.size()==(size/2)+1)
    {
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    delmid(s,size);
    s.push(temp);
}
void print_s(stack<int> s){
    if (s.empty())
    {
        cout<<"\n";
        return;
    }
    cout<<s.top()<<" ";
    s.pop();
    print_s(s);
}
int main(){
    system("clear");
    int arr[]={1,3,2,4,3,5,1};
    stack<int> s;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        s.push(arr[i]);
    }
    print_s(s);
    delmid(s,s.size());
    print_s(s);
    return 0;
}