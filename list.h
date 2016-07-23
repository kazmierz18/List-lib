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
     * macro for initialization of a list
     */
#define List_init(ll) ll.next=NULL
    /*
     * Data type definition
     */
    typedef void* Data;
    
    /*Structure holding pointers to Data and next element in the list
     *if its last element of list next equals NULL
     */
    typedef struct List{
        Data data;
        struct List *next;
    }List;
    
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
#ifdef	__cplusplus
}
#endif

#endif	/* LIST_H */

