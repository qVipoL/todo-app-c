#ifndef TODO_TASK_H
#define TODO_TASK_H

typedef struct todo_task {
    char *task_name;
} todo_task_t;

void task_create(todo_task_t *task, char *task_name);
void task_display(todo_task_t *task);
void task_destroy(todo_task_t *task);

#endif