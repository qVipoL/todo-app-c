#include "../include/todo_task.h"

#ifndef TODO_BOARD_H
#define TODO_BOARD_H

typedef struct todo_list_node {
    todo_task_t *item;
    struct todo_list_node *next;
} todo_list_t;

todo_list_t *list_create();
void list_add_item(todo_list_t **list, todo_task_t *item);
void list_remove_item(todo_list_t **list, todo_task_t *item);
void list_display(todo_list_t *list);
void list_destroy(todo_list_t **list);

#endif