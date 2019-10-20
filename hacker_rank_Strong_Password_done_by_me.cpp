#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) 
{
    int i=0,a=0,b=0,c=0,d=0,e=0,z;
   
         for(i=0;i<password.length();i++)
    { z=password[i];
        if(z>=48&&z<=57)a++;
        if(z>=97&&z<=122)b++;//dgit
        if(z>=65&&z<=90)c++;//lower
        if(z>=32&&z<=47||z>=58&&z<=64||z>=91&&z<=96||z>=123&&z<=127)d++;//symbol
        
    }
    int rt=0;
     if(n>=6&&a>0&&b>0&&c>0&&d>0)
    {
        cout<<"0"<<endl;
    }
    else
    {   int out=0,rog=0,che=0,sub=0;
        sub=n-6;
       //  cout<<6-n<<endl;
        
             if(a==0)out++;
         if(b==0)out++;
         if(c==0)out++;
         if(d==0)out++;
            //cout<<out<<endl;
            che=out;
            if(sub>=0)
            {
               rt=out;
               cout<<rt<<endl;
            }
            else
            {
                che=che+sub;
                if(che>=0)
                {
                    rt=out;
                   cout<<rt<<endl;
                }
                else{
                    rt=6-n;
                    cout<<rt<<endl;;
                }
            }
    }
    return rt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
x