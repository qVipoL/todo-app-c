#include "../include/todo_list.h"

static void test_todo();

int main() {
    test_todo();

    return 0;
}

static void test_todo() {
    todo_task_t t1, t2, t3;
    todo_list_t *list;

    task_create(&t1, "task1");
    task_create(&t2, "task2");
    task_create(&t3, "task3");

    list = list_create();

    list_add_item(&list, &t1);
    list_add_item(&list, &t2);
    list_add_item(&list, &t3);

    list_display(list);

    list_remove_item(&list, &t2);
    list_remove_item(&list, &t1);

    list_display(list);

    list_destroy(&list);

    task_destroy(&t1);
    task_destroy(&t2);
    task_destroy(&t3);
}