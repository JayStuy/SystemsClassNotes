#include <stdio.h>
#include <stdlib.h>

int main() {

  /*char s1[256];
  char s2[256] = "Imagine";
  char s3*/
  char s[] = "Basketball";
  int sLen = 0;
  
  while(s[sLen]) {
    sLen ++;
  }

  printf("length of s[] = &s\n", s, sLen);

  return 0;
}
