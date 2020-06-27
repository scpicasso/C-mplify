#include "node.h"

Node* newNode(type type, char* value)
{
    Node* node = malloc(sizeof(Node));
    node->type = type;
    node->value = value;
    node->parent = NULL;
    node->left_child = NULL;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void append(Node* parent, Node* node) {
    if (parent == NULL || node == NULL)
        return;

    if (parent->left_child != NULL){
        Node* aux = parent->left_child;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        node->prev = aux;
        aux->next = node;
    } else
        parent->left_child = node;
    
    node->parent = parent;
}

void inorder(Node* node) {
    if (node->type != EMPTY_TYPE && node->value != NULL)
        fprintf(temp_file, "%s", node->value);
    else {
        Node* aux = node->left_child;
        while(aux != NULL) {
            inorder(aux);
            aux = aux->next;
        }
    }
}