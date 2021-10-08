#include "replace.h"
#include <stdio.h>

int main() {
  char input[100];
  printf("Write:\n");
  scanf("%s", input);

  replace(input);

  if (strcmp(replace("&"), "&amp") == 1) {
    printf("Yo");
  }
}
