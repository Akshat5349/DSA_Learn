#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int key){
    if (n==0||arr[n-1]<=key)
    {
        arr[n]=key;
        return;
    }
    arr[n]=arr[n-1];
    insert(arr,n-1,key);
}
void sort(int arr[],int n){
    if (n==1)
    {
        return;
    }
    sort(arr,n-1);
    insert(arr,n-1,arr[n-1]);
}
int main(){
    system("clear");
    int arr[]={1,4,2,6,3,5,7};
    sort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}