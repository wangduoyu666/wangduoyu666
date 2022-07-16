# include <stdio.h>
# include <stdlib.h>
struct dlist
{
    int info;
    struct dlist *next;
    struct dlist *prev;
};
struct dlist *start;
void create(struct dlist *node);
void display(struct dlist *node);
int main(void)
{
    start =(struct dlist *) malloc(sizeof(struct dlist));
    create(start);
    display(start);
}
void create(struct dlist *node)
{
    int temp;
    node->next = NULL;
    node->prev = NULL;
    printf("input -9999 for break:\n");
    while(1)
    {
        printf("input the mode value:");
        scanf("%d", &temp);
        if (temp == -9999)
        {
            node->next = NULL;
            break;
        }
        node->info = temp;
        node->next =(struct dlist *) malloc(sizeof(struct dlist));
        node->next->prev = node;
        node=node->next;
    }
}
void display(struct dlist *node)
{
    printf("forward traversal:\n");
    while(node->next !=NULL)
    {
        printf("%d->", node->info);
        node = node->next;
    }
    printf("\nbackward traversal:\n");
    while(node->prev !=NULL)
    {
        node = node->prev;
        printf("%d->", node->info);
    }
}

