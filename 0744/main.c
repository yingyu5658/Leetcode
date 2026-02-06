#include <stdio.h>
#include <stdlib.h>

// 群友：你赢了，你的码风小众又变态
int cmp(const void *a,const void *b){return *(char*)a-*(char*)b;}
char _nextGreatestLetter(char *letters, int lettersSize, char target) {
  int j=0;
  for (int i=0; i<lettersSize;i++){if(letters[i]>target){j++;}}
  if(j==0) return letters[0];
  char*k=malloc(sizeof(char)*j);
  int q=0;
  for (int i=0;i<lettersSize;i++){if(letters[i]>target){k[q] = letters[i];q++;}}
  qsort(k,j,sizeof(char),cmp);
  return k[0];
}

// 正常人写法：
char nextGreatestLetter(char* letters, int lettersSize, char target) {
  for(int i = 0; i < lettersSize; i++) {
    if(letters[i] > target) {
      return letters[i];
    }
  }

  return letters[0];
}

int main() {
  char letters[] = {'c', 'f', 'j'};
  int sz = sizeof(letters) / sizeof(letters[0]);
  char target = 'c';
  char rtn = nextGreatestLetter(letters, sz, target);
}
