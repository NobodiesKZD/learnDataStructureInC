#include<stdlib.h>
#define DataType int
typedef struct Node
{
    DataType data;
    struct Node *next;   
} ListNode, * LinkList;

void initList(LinkList *head){
    if((*head = (LinkList)malloc(sizeof(ListNode))) == NULL){
        exit(-1);
        (*head)->next = NULL;
    }
}

int listEmpty(LinkList head){
    if(head->next == NULL){
        return 1
    }
    else{
        return -1;
    }
}

ListNode* get(LinkList head, int i){
    ListNode* p;
    int j;
    if(listEmpty(head)){
        return NULL;
    }

    if(i < 1){
        return NULL;
    }

    j = 0;
    p = head;
    while(p->next != NULL && j < i){
        p = p->next;
        j++;
    }
    if(j == i){
        return p;
    }
    else{
        return NULL;
    }
}

ListNode* locateElem(LinkList head, DataType e){
    ListNode* p;
    p = head->next;
    while(p){
        if(p->data != e){
            p = p->next
        }
        else{
            break;
        }
    }
    return p;
}

