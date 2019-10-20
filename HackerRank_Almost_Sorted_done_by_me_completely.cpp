#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the almostSorted function below.
void almostSorted(vector<int> arr) 
{
vector<int> v,sor;
int i,j,indx1,flag,n,fond=0,cnt=0,indx2;
string r;
n=arr.size();
sor=arr;
v=arr;
sort(sor.begin(),sor.end());
if(sor==arr)
{
    r="yes";
    cout<<r<<endl;
    fond++;
}
if(v.size()==2)
{
    if(v[0]>v[1])
    {
        int a;
        a=v[1];
        v[1]=v[0];
        v[0]=a;
    }
    if(v==sor)
    {
    cout<<"yes"<<endl;
    cout<<"swap "<<1<<" "<<2<<endl;
    fond++;    
    }
    
}
if(fond==0)
{
  
    for(i=0;i<n-1;i++)
{
    if(arr[i]>arr[i+1])
    {
        cnt++;
        if(cnt==1)indx1=i;
        else indx2=i+1;
    }
}
if(cnt==2)
{
    int a,b;
    a=v[indx1];
    b=v[indx2];
    v[indx2]=a;
    v[indx1]=b;
}
if(v==sor&&fond==0)
{cout<<"yes"<<endl;
    cout<<"swap "<<indx1+1<<" "<<indx2+1<<endl;
    fond++;
}
if(cnt>2&&fond==0)
{
    reverse(v.begin()+indx1,v.begin()+indx2+1);
    if(v==sor)
    cout<<"yes"<<endl;
    cout<<"reverse "<<indx1+1<<" "<<indx2+1<<endl;
    fond++;
    
}


}
if(fond==0)
{
    cout<<"no"<<endl;
}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    almostSorted(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
