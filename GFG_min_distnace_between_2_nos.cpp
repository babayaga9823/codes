long long minDist(long long arr[], long long n, long long x, long long y)
{  
    long long int a[10000],b[10000],ai=0,bi=0,i,z,min=INT_MAX,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)a[ai++]=i;
        if(arr[i]==y)b[bi++]=i;
    }
   // z=ai>bi?ai:bi;
    if(ai==0||bi==0)return -1;
    for(i=0;i<ai;i++)
    {
        for(j=0;j<bi;j++)
        {
            if(abs(int(b[j]-a[i]))<min)min=abs(int(b[j]-a[i]));
        }
    }
    return min;
}