// Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct tree_node
{
    int data;
    struct tree_node *lchild;
    struct tree_node *rchild;
};

typedef struct tree_node tree_node;

struct tree
{
    tree_node * root;
    int size;
};

typedef struct tree tree;

bool is_tree_empty(tree *t)
{
    return t->size == 0;
}

tree* init_tree()
{
    tree *t = (tree*)malloc(sizeof(tree));
    t->root = NULL;
    t->size = 0;
    return t;
}

void insert(tree *t,int val)
{
    tree_node *tn = (tree_node*)malloc(sizeof(tree_node));
    tn->data = val;
    tn->lchild = tn->rchild = NULL;
    if(is_tree_empty(t))
    {
        t->root = tn;
        t->size++;
        return ;
    }
    tree_node *root = t->root;
    while(1)
    {
        if(val > root->data)
        {
            if(root->rchild == NULL)
            {
                root->rchild = tn;
                t->size++;
                break;
            }else
                root =  root->rchild;
        }else if(val < root->data)
        {
            if(root->lchild == NULL)
            {
                root->lchild = tn;
                t->size++;
                break;
            }else
                root = root->lchild;
        }else
            break;
    }
}

// Depth First Traversal 
void traverse_tree(tree_node *root, char s)
{
    if(root == NULL)
        return ;
    if(s == 'f' || s == 'f')
    {
        printf("%d->",root->data);
        traverse_tree(root->lchild,'f');
        traverse_tree(root->rchild,'f');
    }else if(s == 'i' || s == 'I')
    {
        traverse_tree(root->lchild,'i');
        printf("%d->",root->data);
        traverse_tree(root->rchild,'i');
    }else if(s == 'p' || s == 'P')
    {
        traverse_tree(root->lchild,'p');
        traverse_tree(root->rchild,'p');
        printf("%d->",root->data);
    }else
        printf("Invalid Traversal Schema");
}

int main(void)
{
    tree *t = init_tree();
    insert(t,8);
    insert(t,2);
    insert(t,10);
    insert(t,1);
    insert(t,9);
    insert(t,3);
    insert(t,11);
    insert(t,4);
    traverse_tree(t->root,'f');
    return 0;
}