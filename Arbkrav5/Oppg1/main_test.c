#include "replace.h"
#include <assert.h>
#include <string.h>

int main() {
  char *test_amp = "&";
  char *test_lt = "<";
  char *test_gt = ">";

  assert(strcmp(replace("&"), "&amp"));
  assert(strcmp(replace(test_lt), "&lt"));
  assert(strcmp(replace(test_gt), "&gt"));

  assert(strcmp(replace(test_amp), "Hei"));
  assert(strcmp(replace(test_lt), "på"));
  assert(strcmp(replace(test_gt), "deg"));
}
