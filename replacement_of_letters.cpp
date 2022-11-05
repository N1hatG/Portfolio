#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	char ch;
	while(scanf("%c",&ch) == 1)

{

  if(ch >= 'a' && ch <= 'z')

     ch = ch  + 'A' - 'a';

  else if(ch >= 'A' && ch <= 'Z')

     ch = ch + 'a' - 'A';

  printf ("%c",ch);

}
}
