#include <stdio.h>
#include <string.h>
main()
{ 
   char s[] = "Hello\0Hi";
   
   printf("%lu %lu",strlen(s),sizeof(s));
}