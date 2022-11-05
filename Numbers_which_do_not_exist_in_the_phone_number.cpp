#include <iostream>

#include <cstring>

using namespace std;

int main()

{

  string a;

  int i, r[10]={0},k=0;

 getline(cin,a);

  for(i=0;i<a.size();i++)

      r[a[i]-'0']++;

for(i=0;i<10;i++)

    if(r[i]==0) k++;

    cout<<k<<endl;

    for(i=0;i<10;i++)

  {if(r[i]==0)

    cout<<i<<" ";

          } 

        return 0;

}
