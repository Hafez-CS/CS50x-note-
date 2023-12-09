#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


// a normal situation
int main(void)
{

    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // List of size 4
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}


//#############################


// we can chage and delete loop(for) , looks like this :
int main(void)
{

    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));        // realloc get 2 things , 1- copy this object in to the tmp  /  2- size of tmp
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    list = tmp;

    list[3] = 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

// printf("%i\n", tmp[3]); = 4

    free(list);
    return 0;
}

// with this code , wthen we say print tmp[3] we get 4 .



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

// 5(A)

typedef struct node
{
    int number;
    struct node *next;
}
node;


int main(int argc, char *argv[])
{

    node *list = NULL;


    for (int i = 1; i < argc; i++)
    {

        int jumber = atoi(argv[i]);


        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        n->number = jumber;
        n->next = NULL;


        n->next = list;
        list = n;
    }


    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }


    // Free memory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}



//#############################


// this is not very diffrenet , we just make loop(for)


typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{

    node *list = NULL;


    for (int i = 1; i < argc; i++)
    {

        int number = atoi(argv[i]);


        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;


        n->next = list;
        list = n;
    }

// we just make this
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }


    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

//5(B)

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{

    node *list = NULL;


    for (int i = 1; i < argc; i++)
    {

        int number = atoi(argv[i]);


        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;


        if (list == NULL)
        {

            list = n;
        }


        else
        {

            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {

                if (ptr->next == NULL)
                {

                    ptr->next = n;
                    break;
                }
            }
        }
    }


    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }


    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

// 5(C)


typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{

    node *list = NULL;


    for (int i = 1; i < argc; i++)
    {

        int number = atoi(argv[i]);


        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;


        if (list == NULL)
        {
            list = n;
        }


        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }


        else
        {

            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {

                if (ptr->next == NULL)
                {

                    ptr->next = n;
                    break;
                }


                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }


    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }


    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

// 5(D)

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;


void free_tree(node *root);
void print_tree(node *root);


int main(void)
{

    node *tree = NULL;


    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;


    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;


    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;


    print_tree(tree);


    // Free tree
    free_tree(tree);
    return 0;
}


void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}



void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}



//#############################


bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else if (number == tree->number)
    {
        return true;
    }
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&