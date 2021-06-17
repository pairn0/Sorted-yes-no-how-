#include <criterion/criterion.h>

char* isSortedAndHow(int*,int);

Test(basicTests, should_pass_all_the_tests_provided) {
    int array1[] = {1,2};
    char* expected1 = "yes, ascending";
    char* actual1 = isSortedAndHow(array1, 2);
    cr_assert_str_eq(actual1, expected1, "Expected: '%s' But actual: '%s'", expected1, actual1);
    
    int array2[] = {15, 7, 3, -8};
    char* expected2 = "yes, descending";
    char* actual2 = isSortedAndHow(array2, 4);
    cr_assert_str_eq(actual2, expected2, "Expected: '%s' But actual: '%s'", expected2, actual2);
    
    int array3[] = {4, 2, 30};
    char* expected3 = "no";
    char* actual3 = isSortedAndHow(array3, 3);
    cr_assert_str_eq(actual3, expected3, "Expected: '%s' But actual: '%s'", expected3, actual3);
}