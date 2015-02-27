#include <stdio.h>
#include <string.h>
void daonguoc(char *chuoi)
{
for (int i=strlen(chuoi);i>=0;i--)
  {
     printf("%c",chuoi[i]);
  }
}
int main()
{
daonguoc("code block");
}
