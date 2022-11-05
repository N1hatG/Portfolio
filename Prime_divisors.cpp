#include <iostream>

using namespace std;

int main()

{

unsigned long long n;

long int i;

cin>>n;

for (i = 2; i*i < n; ) {

if ( n % i == 0 ){

cout << i << ' ';

n /= i;

}

else{

++i;

}

}

if ( n > 1 )

cout << n;

return 0;

}
