#include <stdio.h>

char* isSortedAndHow(int* array, int arrayLength)
{
  // Create an empty array where ascending or descending test results will be stored
  int i;
  // If the value is greater than the previous one add a 1, if smaller add a 0, if equal, add 1000
  // Add the value of all values in the results array and return the answer
  int sum = 0;
  for (i = 1; array[i]; i++) {
    if (array[i] < array[i-1]) {
      sum += 0;
    } else if (array[i] > array[i-1]) {
        sum += 1;
    } else {
        sum += 1000;
    }
  } printf(sum);
  
  if (sum == 0) {
   return "yes, descending";
  } else if (sum == (arrayLength - 1)) {
      return "yes, ascending";
  } else {
      return "no";
  }
}