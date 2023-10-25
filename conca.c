#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  char result[200];
  
  printf("Enter first string: ");
  scanf("%s", str1);

  printf("Enter second string: ");
  scanf("%s", str2);
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  for(int i=0; i<len1; i++) {
    result[i] = str1[i];
  }

  for(int i=0; i<len2; i++) {
    result[len1 + i] = str2[i];
  }

  result[len1+len2] = '\0';

  printf("Concatenated string: %s", result);

  return 0;
}