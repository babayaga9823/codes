#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the acmTeam function below.
vector<int> acmTeam(vector<string> topic) 
{
int z,i,j,con,divd,c=0,f,count=0,cd=0,sub=0;
vector<int>v,data,final;
z=topic.size();
for(i=0;i<z;i++)
{
   con=stoi(topic[i]);
    divd=con;
    int rem=0,remand=0,a=0,inc=0;
    while(divd!=0)
    {
    	remand=divd%10;
       rem=rem+(remand)*pow(2,inc); 
       if(cd==0)
       {
            a=a+pow(2,inc);
       
       //cout<<" a pushed "<<a<<endl;
       v.push_back(a);
       }
      
       divd/=10;
       inc++;
    }
    cd++;
    data.push_back(rem);
   
}
sort(data.begin(),data.end());
f=data[data.size()-1]+data[data.size()-2];
cout<<"dd"<<f;
//cout<<" f "<<f<<endl;
j=0;
int l=0;
while(l<v.size())
{
    cout<<"v "<<v[l]<<endl;
    l++;
}
while(f>v[j])
{
    j++;
}
sub=j;
if(c==0)
final.push_back(j);
 c++;
cout<<" no.of subjects "<<j<<endl;
 l=0;
cout<<"data size "<<data.size()<<endl;
while(l<data.size())
{
    cout<<"daat "<<data[l]<<endl;
    l++;
}
for(i=0;i<topic.size();i++)
{
 
 for(j=0;j<topic.size();j++)
{
    if(data[i]+data[j]==v[sub-1])
    {
        count++;
    }
}
}

l=0;

final.push_back(count/2);
cout<<"count "<<count/2<<"pushed "<<final[1]<<endl;
while(l<final.size())
{
    cout<<"Empty "<<final[l];
    l++;
}
 return final;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<string> topic(n);

    for (int i = 0; i < n; i++) {
        string topic_item;
        getline(cin, topic_item);

        topic[i] = topic_item;
    }

    vector<int> result = acmTeam(topic);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

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
