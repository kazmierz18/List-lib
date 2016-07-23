/* 
 * File:   list.h
 * Author: Lukasz
 *
 * Created on 17 lipca 2016, 14:17
 */

#ifndef LIST_H
#define	LIST_H

#ifdef	__cplusplus
extern "C" {
#endif
    /*
     * macro for initialization of a linked list
     */
#define List_init(ll) ll.next=NULL
    /*
     * macro for initialization ofa  double linked list
     */
#define List_double_init(ll) do{ll.next=NULL;ll.previous=NULL;}while(0)
    /*
     * Data type definition
     */
    typedef void* Data;
    
    /*
     * Structure holding pointers to Data and next element in the list
     * if its last element of list next equals NULL
     */
    typedef struct List{
        Data data;
        struct List *next;
    }List;
    /*
     * Structure holding pointers to Data and next and previous element in the list
     * last element of list next equals NULL
     * first element of the list equals NULL
     */
    typedef struct List_double{
        Data data;
        struct List *next;
        struct List *previous;
    }List_double;
    
    /*
     * Adds a new element at the end of the list
     * @ptr: pointer to the begining of the list
     * @d: data to be stored (see note)
     * @return: pointer to the new created element
     * Note: d is a type Data which is a void pointer, needs to be cast
     */
    List* List_put(List* ptr, Data d);
    
    /*
     * Gets last element of the list an removes it
     * @ptr: pointer to the begining of the list
     * @return: Data of the last element (see note)
     * Note: d is a type Data which is a void pointer, needs to be cast
     */
    Data List_pop(List* ptr);
    
    /*
     * Gets element from a list
     * @ptr: pointer to begining of a list
     * @index: chosen element from the list
     * @return: Data of the last element (see note)
     * if index exceeds number of elements on the list function returns NULL
     * Note: d is a type Data which is a void pointer, needs to be cast
     */
    Data List_get_element(List* ptr,int index);
    
#ifdef	__cplusplus
}
#endif

#endif	/* LIST_H */

