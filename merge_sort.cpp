#include<iostream>
using namespace std;
int a[]={10,8,6,4,2,1};
void merge(int a[],int p,int q,int r);
mergesort(int a[],int p,int r)
{int q;
    if(p<q)
    {q=(p+r)/2;
	mergesort(a,p,q);
	mergesort(a,q+1,r);
	merge(a,p,q,r);
    }

}
void merge(int a[],int p,int q,int r)
{
int n1=(q-p+1);
int n2=(r-q);
int l1[n1+1],l2[n2+1];
for(int i=0;i<=q;i++)
{
	l1[i]=a[i];
}
for(int i=q+1;i<r;i++)
{
	l2[i]=a[i];
}

l1[n1+1]=2^8;
l2[n2+1]=2^8;
int i=0,j=0,z=0,n=r-p+1;
for(int k=p;k<=r;k++)
{
	if(l1[i]<l2[j])
	{
		a[z]=l1[i];
		i++;
	}
	else
	{
		a[z]=l2[j];
		j++;
	}
}
}

void pnt(int a[],int p,int r)
{
	cout<<"The sorted string : \n";
for(int i=p;i<=r;i++)
{
	cout<<a[i]<<" ,";
}
}

int main()
{
mergesort(a,0,5);
pnt(a,0,5);

}
