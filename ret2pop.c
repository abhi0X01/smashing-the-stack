#include <string.h>
void function(int x, char* str)
{
  char buffer[256];
  strcpy(buffer, str);
}
int main(int argc, char** argv)
{
   function(64, argv[1]);
   return 1;
}
