#include "../include/todo_task.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

todo_task_t *task_create(char *task_name) {
    todo_task_t *task = (todo_task_t *)malloc(sizeof(todo_task_t));
    task->task_name = strdup(task_name);
    return task;
}

void task_display(todo_task_t *task) {
    printf("%s", task->task_name);
}

void task_destroy(todo_task_t *task) {
    free(task->task_name);
    free(task);
}