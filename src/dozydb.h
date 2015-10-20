#include <stdint.h>
#include <pthread.h>

#pragma once


typedef struct {
    void *key;
    void *value;
    enum {
        red, black
    } colour;
    struct dozy_node *right, *left, *parent;

} dozy_node;


typedef struct {
    struct dozy_node *root;

} dozy;

dozy *dozy_create(void);

void dozy_destroy(dozy *store);

void dozy_set(dozy *store, void *key, void *value);
