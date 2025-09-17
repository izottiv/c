#include <stdio.h> 
#include <stdlib.h> 
#define MAX 50 
  

struct Node { 
    char data; 
    unsigned isEndOfString : 1; 
  
    struct Node *left, *eq, *right; 
}; 
  
struct Node* newNode(char data) 
{ 
    struct Node* temp 
        = (struct Node*)malloc(sizeof(struct Node)); 
    temp->data = data; 
    temp->isEndOfString = 0; 
    temp->left = temp->eq = temp->right = NULL; 
    return temp; 
} 
  
void insert(struct Node** root, char* word) 
{ 

    if (!(*root)) 
        *root = newNode(*word); 
 
    if ((*word) < (*root)->data) 
        insert(&((*root)->left), word); 

    else if ((*word) > (*root)->data) 
        insert(&((*root)->right), word); 

    else { 
        if (*(word + 1)) 
            insert(&((*root)->eq), word + 1); 
  
        else
            (*root)->isEndOfString = 1; 
    } 
} 
  
  
int searchTST(struct Node* root, char* word) 
{ 
    if (!root) 
        return 0; 
  
    if (*word < (root)->data) 
        return searchTST(root->left, word); 
  
    else if (*word > (root)->data) 
        return searchTST(root->right, word); 
  
    else { 
        if (*(word + 1) == '\0') 
            return root->isEndOfString; 
  
        return searchTST(root->eq, word + 1); 
    } 
} 
  
int main() 
{    
    int nmr;
    char nome[15], busca[15];
    while(1){
        struct Node* root = NULL;
        scanf("%d", &nmr);
        if(nmr==0){
            break;
        }
        for(int i=0;i<nmr;i++){
            scanf("%s", nome);
            insert(&root, nome);
        }
        scanf("%s", busca);
        searchTST(root, busca) ? printf("Pessoa Encontrada\n") 
                                : printf("Pessoa Não Encontrada\n"); 
    }
  
    return 0; 
}