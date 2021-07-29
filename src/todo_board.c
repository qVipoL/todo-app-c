#include "../include/todo_board.h"

#include <stdio.h>
#include <stdlib.h>

todo_list_t *list_create() {
    return NULL;
}

void list_add_item(todo_list_t **list, todo_task_t *item) {
    todo_list_t *node = (todo_list_t *)malloc(sizeof(todo_list_t));
    node->item = item;
    node->next = *list;
    *list = node;
}

void list_remove_item(todo_list_t **list, todo_task_t *item) {
    todo_list_t *cur = *list, *prev;

    while (cur != NULL && cur->item != item) {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL)
        return;

    if (cur == *list) {
        *list = cur->next;
        free(cur);
        return;
    }

    prev->next = cur->next;
    task_destroy(cur->item);
    free(cur);
}

void list_display(todo_list_t *list) {
    printf("tasks: ");
    while (list != NULL) {
        printf("-> ");
        task_display(list->item);
        list = list->next;
    }
    printf("\n");
}

void list_destroy(todo_list_t **list) {
    todo_list_t *cur;

    while (*list != NULL) {
        cur = *list;
        *list = (*list)->next;
        task_destroy(cur->item);
        free(cur);
    }
}