#include "../include/todo_task.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void task_create(todo_task_t *task, char *task_name) {
    task->task_name = strdup(task_name);
}

void task_display(todo_task_t *task) {
    printf("%s", task->task_name);
}

void task_destroy(todo_task_t *task) {
    free(task->task_name);
}