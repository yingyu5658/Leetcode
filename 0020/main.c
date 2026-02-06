#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char *s) {
  int n = strlen(s);
  if (n < 2)
    return false;

  char *stack = (char *)malloc(sizeof(char) * (n + 1));
  int top = -1;

  for (int i = 0; i < n; i++) {
    char ch = s[i];

    if (ch == '(' || ch == '[' || ch == '{') {
      stack[++top] = ch;
    } else {
      if (top == -1) {
	return false;
      }

      char topChar = stack[top--];

      if (ch == ')' && topChar != '(') {
	free(stack);
	return false;
      }
      if (ch == ']' && topChar != '[') {
	free(stack);
	return false;
      }
      if (ch == '}' && topChar != '{') {
        free(stack);
        return false;
      }
    }
  }

  bool result = (top == -1);
  free(stack);
  return result;
}
