#include <iostream>
#include <string>
using namespace std;
intmain()
{
string str;
bool oldu=true;
int i;
cin>>str;
while (oldu==true && str.length()>0){
oldu=false;
for (int i=0; i < str.length(); i++)
if((str[i]=='('&&str[i+1]==')')||(str[i]=='['&&str[i+1]==']')||(str[i]=='{' && str[i+1]=='}'))
{
str.erase(i,2);
oldu=true;}
}
if (str.length() == 0)
cout<<"yes";
else
cout<<"no";
return 0;
}
