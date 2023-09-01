#include<bits/stdc++.h>
using namespace std;
//a b c => a b c ab bc ca abc 
void str(string st,int i , int n, string ss, vector<string> &result){
    //base case 
    if(i == st.length()){
        result.push_back(ss);
        return;
    }
    str(st,i+1,n,ss+st[i],result);
    str(st,i+1,n,ss,result);

}
int main()
{

    string sss = "abc";
    int n = sss.length();
    vector<string> v;
    str(sss,0,n," ",v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}
