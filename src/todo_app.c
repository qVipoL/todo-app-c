#include "../include/todo_list.h"

int main() {
    todo_list_t *list = list_create();
    todo_task_t *task2 = task_create("task2");

    list_add_item(&list, task_create("task3"));
    list_add_item(&list, task_create("task1"));
    list_add_item(&list, task2);

    list_display(list);

    list_remove_item(&list, task2);

    list_display(list);

    list_destroy(&list);
    return 0;
}