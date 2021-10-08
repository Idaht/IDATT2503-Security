#include "replace.h"
#include <assert.h>
#include <stdbool.h>
#include <string.h>

int main() {
  char *test_amp = "&";
  char *test_lt = "<";
  char *test_gt = ">";

  assert(strcmp(replace("&"), "&amp") == true);
  assert(strcmp(replace(test_lt), "&lt") == true);
  assert(strcmp(replace(test_gt), "&gt") == true);

  assert(strcmp(replace(test_amp), "Hei") == false);
  assert(strcmp(replace(test_lt), "på") == false);
  assert(strcmp(replace(test_gt), "deg") == false);
}
