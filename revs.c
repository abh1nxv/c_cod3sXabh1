#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {

  // split the string into words 
  char *word = strtok(str, " ");

  while(word != NULL) {
    // reverse the individual word
    reverse(word); 

    word = strtok(NULL, " ");
  }
}

void reverse(char word[]) {
  int i, len = strlen(word);
  char temp;

  for(i=0; i < len/2; i++) {
    temp = word[i];
    word[i] = word[len-i-1];
    word[len-i-1] = temp;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  reverseWords(str);
  
  printf("String with reversed words: %s", str);

  return 0;
}