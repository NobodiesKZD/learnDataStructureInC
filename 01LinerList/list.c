#define LISTSIZE 100
#define DataType int;
typedef struct{
    DataType list[LISTSIZE];
    int length;
} SeqList;

void initList(SeqList *L){
    L->length = 0;
}

int isListEmpty(SeqList L){
    if(L.length == 0){
        return 1;
    }
    else{
        return -1;
    }
}

int getElemByIndex(SeqList L,int i, DataType e){
    if(i < 0 || i > L.length){
        return -1;
    }
    else{
        e = L.list[i-1];
        return 1;
    }
}

int locateElem(SeqList L, DataType e){
    int i;
    for(i=0; i<L.length;i++){
        if(L.list[i] == e){
            return i;
        }
    }
    return -1;
}

int inserList(SeqList *L, int i, DataType e){
    if(i < 0 || i > L->list.length){
        printf("插入位置不合法\n");
        return -1;
    }
    else if(L->length >= LISTSIZE){
        printf("list is full\n");
        return -2;
    }
    else{
        int j;
        for(j = L->length; j > i; j--){
            L->list[j] = L->list[j-1];
        }
        L->list[i] = e;
        L->length = L->length + 1;
        return 1;
    }
}
