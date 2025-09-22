#include <stdio.h>
int main(){char buf[100];FILE *f=fopen("test.txt","r");fgets(buf,100,f);printf("%s",buf);fclose(f);return 0;}