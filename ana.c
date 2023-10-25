#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100 

bool areAnagram(char *str1, char *str2){
  int count[MAX_SIZE] = {0};
  int i;

 
  for(i=0; str1[i] && str2[i];  i++) {
    count[str1[i]]++;
    count[str2[i]]--;
  }

  if(str1[i] || str2[i]) return false;
  for(i=0; i<MAX_SIZE; i++) {
    if(count[i]) return false; 
  }

  return true;
}

int main() {
  char str1[MAX_SIZE], str2[MAX_SIZE];  

  printf("Enter first string: ");
  scanf("%s", str1);

  printf("Enter second string: ");
  scanf("%s", str2);

  if(areAnagram(str1, str2)) {
    printf("The two strings are anagram of each other");
  } else {
    printf("The two strings are not anagram of each other"); 
  }

  return 0;
}