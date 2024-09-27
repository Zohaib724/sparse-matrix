#include<iostream>
using namespace std;
class A{
public:
int i,j,r=0,c=0,cnt=0;
	int a[100][100];
	void input()
	{
		cout<<"enter row size";
		cin>>r;
		cout<<"enter column size";
		cin>>c;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
		{
			cout<<"enter the value";
			cin>>a[i][j];
		}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
	}
	void sparse()
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]==0)
				cnt++;
			}
		}
		if(cnt>(r+c)/2)
		cout<<"sparse matrix";
		else
		cout<<"not a sparse matrix";
	}
}ob;
int main()
{
	ob.input();
	ob.sparse();
	return 0;
}
