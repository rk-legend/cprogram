#include <stdio.h>

#define MAX_SIZE 10000 

typedef struct {
    int data[MAX_SIZE];     
    int min_data[MAX_SIZE]; 
    int top_idx;            
} MinStack;

MinStack* minStackCreate() {
    static MinStack obj; 
    obj.top_idx = -1;   
    return &obj;
}

void minStackPush(MinStack* obj, int val) {
    obj->top_idx++;
    
    obj->data[obj->top_idx] = val;
    
    if (obj->top_idx == 0) {
        
        obj->min_data[obj->top_idx] = val;
    } else {
       
        int current_min = obj->min_data[obj->top_idx - 1];
        obj->min_data[obj->top_idx] = (val < current_min) ? val : current_min;
    }
}

void minStackPop(MinStack* obj) {
    if (obj->top_idx >= 0) {
        obj->top_idx--; 
    }
}

int minStackTop(MinStack* obj) {
    return obj->data[obj->top_idx];
}

int minStackGetMin(MinStack* obj) {
    return obj->min_data[obj->top_idx];
}

void minStackFree(MinStack* obj) {
}
