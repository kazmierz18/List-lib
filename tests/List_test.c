/*
 * File:   List_test.c
 * Author: Lukasz
 *
 * Created on 2016-07-23, 13:19:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

/*
 * Simple C Test Suite
 */

void test_initialization() {
    List l;
    List_init(l);
    if(l.next!=NULL){
        printf("%%TEST_FAILED%% time=0 testname=test_initialization (List_test) message=Pointer to next item in a list has not been initialized to NULL\n");
    }
}
void test_list_put(){
    List l;
    List* lptr;
    int data[]={5,2,3};
    List_init(l);
    lptr=List_put(&l,(void*)&data[0]);
    lptr=List_put(&l,(void*)&data[1]);
    lptr=List_put(&l,(void*)&data[2]);
    if(*(int*)lptr->data!=data[2] || lptr->next!=NULL){
        printf("%%TEST_FAILED%% time=0 testname=test_list_put (List_test) message=Data has not been set in the list\n");
    }

}
void test_list_pop(){
    List l;
    List* lptr;
    int data[]={5,3,4};
    int result=0;
    List_init(l);
    List_put(&l,(void*)&data[0]);
    lptr=List_put(&l,(void*)&data[1]);
    List_put(&l,(void*)&data[2]);
    result=*(int*)List_pop(&l);
    printf("%d",result);
    if(result!=data[2] || lptr->next!=NULL){
        printf("%%TEST_FAILED%% time=0 testname=test_list_pop (List_test) message=Data has not been taken from last element from the list\n");
    }
}
void test_d_list_put(){
    
}
void test_d_list_pop(){
    
}
void test_list_get_element(){
    
}


int main(int argc, char** argv) {
    clock_t main_tic, main_toc, tic, toc;
    printf("%%SUITE_STARTING%% List_test\n");
    printf("%%SUITE_STARTED%%\n");
    main_tic=clock();
        
    printf("%%TEST_STARTED%% test1 (List_test)\n");
    tic=clock();
    test_initialization();
    toc=clock();
    printf("%%TEST_FINISHED%% time=%.6f test1 (List_test) \n",(double)(toc-tic)/CLOCKS_PER_SEC);
    
    printf("%%TEST_STARTED%% test2 (List_test)\n");
    tic=clock();
    test_list_put();
    toc=clock();
    printf("%%TEST_FINISHED%% time=%.6f test2 (List_test) \n",(double)(toc-tic)/CLOCKS_PER_SEC);

    printf("%%TEST_STARTED%% test3 (List_test)\n");
    tic=clock();
    test_list_pop();
    toc=clock();
    printf("%%TEST_FINISHED%% time=%.6f test3 (List_test) \n",(double)(toc-tic)/CLOCKS_PER_SEC);
    
    main_toc=clock();
    printf("%%SUITE_FINISHED%% time=%.6f\n",(double)(main_toc-main_tic)/CLOCKS_PER_SEC);

    return (EXIT_SUCCESS);
}