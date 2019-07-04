#include<bits/stdc++>
using namespace std;
int main()
{
	int a,b,temp;
	scanf("%d %d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d",a,b);
}