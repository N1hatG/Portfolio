#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main ()
{
double O1M,O2M,r,R,ax,bx,ay,by,mx,my;
cin>>r>>R>>ax>>ay>>bx>>by>>mx>>my;
O1M=sqrt(pow(ax-mx,2)+pow(ay-my,2));
O2M=sqrt(pow(bx-mx,2)+pow(by-my,2));
if(O1M<=r || O2M<=R)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
