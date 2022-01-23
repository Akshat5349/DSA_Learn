#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int key){
    if (s.empty()||s.top()<=key)
    {
        s.push(key);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,key);
    s.push(temp);
}
void sort(stack<int> &s){
    if (s.size()==1)
    {
        return;
    }
    int temp=s.top();
    s.pop();
    sort(s);
    insert(s,temp);
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
    int arr[]={1,3,2,4,3,5,1,6};
    stack<int> s;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        s.push(arr[i]);
    }
    print_s(s);
    sort(s);
    print_s(s);
    return 0;
}