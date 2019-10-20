#include <bits/stdc++.h>
using namespace std;

int main() {

 int n,cnt = 0;
 string str;
 cin >> n;
 cin >> str;
 for(int i = 0; i < n;)
 {
     if(str[i] == '0' && str[i+1] == '1' && str[i+2] == '0')
     {
            cnt++;
            i+=3;
        }
        else i++;
 }
 
 cout<<cnt<<endl;

 return 0;
}