#include "replace.h"
#include <assert.h>
#include <string.h>

int main() {
  char *test_amp = "&";
  char *test_lt = "<";
  char *test_gt = ">";

  assert(strcmp(replace("&"), "&amp") == 1);
  assert(strcmp(replace(test_lt), "&lt") == 1);
  assert(strcmp(replace(test_gt), "&gt") == 1);

  assert(strcmp(replace(test_amp), "Hei") == 0);
  assert(strcmp(replace(test_lt), "på") == 0);
  assert(strcmp(replace(test_gt), "deg") == 0);
}
