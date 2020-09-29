#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
 //kus'
 printf("Hello, %s %s!\n", first, last);
 return 0;
}
