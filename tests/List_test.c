/*
 * File:   List_test.c
 * Author: Lukasz
 *
 * Created on 2016-07-23, 13:19:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Simple C Test Suite
 */

void test1() {
    printf("List_test test 1\n");
}

void test2() {
    printf("List_test test 2\n");
    printf("%%TEST_FAILED%% time=0 testname=test2 (List_test) message=error message sample\n");
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% List_test\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%% test1 (List_test)\n");
    test1();
    printf("%%TEST_FINISHED%% time=0 test1 (List_test) \n");

    printf("%%TEST_STARTED%% test2 (List_test)\n");
    test2();
    printf("%%TEST_FINISHED%% time=0 test2 (List_test) \n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
