//codeforces problem no-791A
//problem name- Bear and Big Brother
#include<iostream>
using namespace std;
 
int main()
{
	int d=0;
	long long a,b;
	cin>>a>>b;
	while(a<=b)
	{
		a=a*3;
		b=b*2;
		d++;
	}
	cout<<d;
	return 0;
}