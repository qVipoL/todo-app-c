#ifndef TODO_TASK_H
#define TODO_TASK_H

typedef struct todo_task {
    char *task_name;
} todo_task_t;

todo_task_t *task_create(char *task_name);
void task_display(todo_task_t *task);
void task_destroy(todo_task_t *task);

#endif