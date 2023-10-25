#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  char sub[100];
  
  printf("Enter the main string: ");
  scanf("%s", str);

  printf("Enter the substring to search: ");
  scanf("%s", sub);

  char *ptr = strstr(str, sub);

  if(ptr) {
    printf("Substring found in given string");
  }
  else {
    printf("Substring not found");
  }

  return 0;
}