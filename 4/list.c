#include "stdio.h"
#include "stdlib.h"
#define str_len 250

struct Node{
    struct Node* next;
    char* name;
};

typedef struct Node Node;

struct List
{
    Node* root;
    int size;
};

typedef struct List List;

List* init()
{
    struct List* a = (List*)malloc(sizeof(List));
    a->root = NULL;
    a->size = 0;
    return a;
}

void push(List* a, char *s)
{
    Node* t = (Node*)malloc(sizeof(Node));
    t->next = NULL;
    t->name = s;
    if (a->root){
        Node* cur = a->root;
        while(cur->next) cur = cur->next;
        cur->next = t;
    } else {
        a->root = t;
    }
    a->size++;
}

void pop(List* a){
    if (a->root){
        if (a->root->next){
            Node* cur = a->root;
            while(cur->next->next) cur = cur->next;
            free(cur->next->name);
            free(cur->next);
            cur->next = NULL;
        } else {
            free(a->root->name);
            free(a->root);
            a->root = NULL;
        }
    }
    a->size--;
}

void print_list(List* a)
{
    Node* cur = a->root;
    while(cur){
        printf("%s\n", cur->name);
        cur = cur->next;
    }
    if (!a->size) printf("Nothing\n");
    
}

int str_eq(char* a, char* b)
{
    for (int i = 0; i<str_len && !(a[i]=='\0' && b[i]=='\0'); ++i) if (a[i]!=b[i]) return 0;
    return 1;
}

void clear(List** a)
{
    while(!(*a)->size) pop(*a);
    free(*a);
    *a = NULL;
}

int find(List* a, char* s)
{
    int idx = -1;
    Node* cur = a->root;
    while(cur){
        idx++;
        if (str_eq(cur->name, s)) return idx;
        cur = cur->next;
    }
    return -1;
}

int main()
{
    List* a = init();
    while(1){
        printf("Enter command:\n");
        char temp[str_len];
        gets(temp);
        if (str_eq(temp, "help")) printf("Available functions: add, pop, find, print, clear, Exit, help\n");
        if (str_eq(temp, "Exit")) break;
        if (a){
            if (str_eq(temp, "add")){
                printf("Enter name:\n");
                char* t = (char*)malloc(str_len*sizeof(char));
                gets(t);
                push(a, t);
            }
            if (str_eq(temp, "pop")) pop(a);
            if (str_eq(temp, "print")) print_list(a);    
            if (str_eq(temp, "clear")) clear(&a);
            if (str_eq(temp, "find")){
                printf("Enter name:\n");
                char* t = (char*)malloc(str_len*sizeof(char));
                gets(t);
                printf("Index of element %s: %d\n", t, find(a, t));
            }
        } else {
            printf("Deleted list. Available functions: Exit, help\n");
        }
}
    
    return 0;
}
