#include <bits/stdc++.h>
using namespace std;

int main() {
vector<pair<int,string>>v;
int i;
for(i=1;i<5;i++)
{pair<int,string>p;
    p=make_pair(i*1000,"I LOVE YOU ALISHA");
    v.push_back(p);
}
i=0;
while(i<v.size())
{
    cout<<v[i].second<<" "<<v[i].first<<endl;
    i++;
}
	return 0;
}