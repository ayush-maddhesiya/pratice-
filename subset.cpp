#include<bits/stdc++.h>
using namespace std;
void f(int arr[],int i ,int n,int sum,vector<int> & v){
    //base case;
    if(i == n){
        v.push_back(sum);
        return ;
    }
    f(arr,i+1,n,sum+arr[i],v);
    f(arr,i+1,n,sum,v);
}
int main()
{
    int arr[] = { 2,3};
    int n = 2;
    int i = 0;
    vector<int> result ;

    f(arr,i,n,0,result);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}