#include <stdio.h>
typedef unsigned int uint;
enum Days{MON,TUE,WED};
int main(){uint x=5;enum Days d=TUE;printf("%u %d\n",x,d);return 0;}