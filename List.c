#include <stdio.h>
#include <stdlib.h>
#include "list.h"
    List* List_put(List* ptr, Data d){
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=malloc(sizeof(List));
            ptr->next->data=d;
            ptr->next->next=NULL;
            return ptr->next;
    }
    Data List_pop(List* ptr){
        List *pptr;
        Data d;
        while(ptr->next!=NULL){
            pptr=ptr;    
            ptr=ptr->next;
        }
        d=ptr->data;
        free(ptr);
        pptr->next=NULL;
        return d;
    }
    Data List_get_element(List *ptr, int index){
        int i=0;
        while(i<index){
            if(ptr->next==NULL){
                return NULL;
            }
            ptr=ptr->next;
        }
        return ptr->data;
    }
        