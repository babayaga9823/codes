#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the truckTour function below.
 */
int truckTour(vector<vector<int>> petrolpumps) 
{
   int fel,dist,i,j,cnt;
   for(i=0;i<petrolpumps.size();i++)
   {
       cnt=0;
       fel=0;
       for(j=i;cnt<petrolpumps.size();j++)
        {    j=j%petrolpumps.size();
            fel=fel+petrolpumps[j][0];
            if(fel>=petrolpumps[j][1])
            {
                fel=fel-petrolpumps[j][1];
            }
            else break;
            cnt++;
        }
       if(cnt==petrolpumps.size())
       {
           cout<<i<<endl;
           break;
       }
   }
return i;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> petrolpumps(n);
    for (int petrolpumps_row_itr = 0; petrolpumps_row_itr < n; petrolpumps_row_itr++) {
        petrolpumps[petrolpumps_row_itr].resize(2);

        for (int petrolpumps_column_itr = 0; petrolpumps_column_itr < 2; petrolpumps_column_itr++) {
            cin >> petrolpumps[petrolpumps_row_itr][petrolpumps_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = truckTour(petrolpumps);

    fout << result << "\n";

    fout.close();

    return 0;
}
