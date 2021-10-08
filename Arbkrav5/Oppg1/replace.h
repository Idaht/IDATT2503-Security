#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *amp = "&amp";
const char *lt = "&lt";
const char *gt = "&gt";

void replace_helper(char *arr, int counter, const char *replace) {
  for (size_t i = counter, j = 0; j < strlen(replace) && i < counter + strlen(replace); i++, j++) {
    arr[i] = replace[j];
  }
}

char *replace(char *input) {
  int pos = 0;
  int counter = 0;
  int amp_counter = 0;
  int lt_counter = 0;
  int gt_counter = 0;

  while (input[pos] != '\0') {
    if (input[pos] == '&') {
      amp_counter++;
    } else if (input[pos] == '<') {
      lt_counter++;
    } else if (input[pos] == '>') {
      gt_counter++;
    }
    pos++;
  }

  pos = 0;
  char *result = malloc(sizeof(*result) * (strlen(input) + (amp_counter * strlen(amp)) + (lt_counter * strlen(lt)) + (gt_counter * strlen(gt)) + 1));

  while (input[pos] != '\0') {

    if (input[pos] == '&') {
      replace_helper(result, counter, amp);
      counter += strlen(amp) - 1;

    } else if (input[pos] == '<') {
      replace_helper(result, counter, lt);
      counter += strlen(lt) - 1;

    } else if (input[pos] == '>') {
      replace_helper(result, counter, gt);
      counter += strlen(gt) - 1;

    } else {
      result[counter] = input[pos];
    }
    pos++;
    counter++;
  }

  printf("%s\n", result);
  char *temp = result;
  free(result);
  return temp;
}
