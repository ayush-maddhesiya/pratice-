//this contain error , not working 
#include<bits/stdc++.h>
using namespace std;
bool f(int num,int *temp){
    //base case
    if(num >= 0 and num <= 9){
        return (num == (*temp)%10);

    }
    bool resutl = f(num / 10,temp) and (num%10 == ((*temp)%10)); 
    (*temp) /= 10;
    return resutl;
}
int main()
{
    int num = 12321;
    int another_number = 12321;
    int *temp = &another_number;
    cout<<f(num,temp);

    return 0;
}
