#ifndef TENSOR_H
#define TENSOR_H

typedef struct {
    void* data;
    char* device;
    unsigned int requiresGrad: 1;
    unsigned int pinMemory: 1;
} Tensor;

#endif