#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
char ch,prev;
int cnt=0;
prev = cnt = 0;
while(scanf("%c",&ch), ch != '\n')
{
if ((ch == '.' || ch == '!' || ch == '?') &&

     !(prev == '.' || prev == '!' || prev == '?')) cnt++;

  prev = ch;

}
printf("%d\n",cnt);
}
