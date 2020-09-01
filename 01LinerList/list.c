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

int getElem(SeqList L,int i,DataType *e){
    if(i < 0 || i > L.length){
        return -1;
    }
    else{
        *e = L.list[i-1];
        return 1;
    }
}

