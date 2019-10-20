#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
struct body
{
    int x;
    int y;
};
vector<string> cavityMap(vector<string> grid) 
{
int n=grid.size(),i,j,cnt=0;
body b[2*n-2];
char a[n][n];
vector<string>v;
for(i=0;i<grid.size();i++)
{
    for(j=0;j<grid.size();j++)
    {
        a[i][j]=grid[i][j];
    }
}
for(i=1;i<grid.size()-1;i++)
{
    for(j=1;j<grid.size()-1;j++)
    {int w=0,s=0,a=0,d=0,x=0;
        s=grid[i][j]-48;
        w=grid[i-1][j]-48;
        x=grid[i+1][j]-48;
        d=grid[i][j+1]-48;
        a=grid[i][j-1]-48;
        if(s>w&&s>x&&s>d&&s>a)
        {
           a[i][j]=X;
        }
    }
}


//print
cout<,endl;
for(i=0;i<grid.size();i++)
{
    for(j=0;j<grid.size();j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
}
return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

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
