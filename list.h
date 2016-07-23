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
#define List_init(ll) ll.next=NULL
    typedef int Data; 
    typedef struct List{
        Data data;
        struct List *next;
    }List;
    List* List_put(List* ptr, Data d);
    Data List_pop(List* ptr);
#ifdef	__cplusplus
}
#endif

#endif	/* LIST_H */

