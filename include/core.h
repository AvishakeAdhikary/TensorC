#include "tensor.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Create function
Tensor* create_tensor(const char* device, int requiresGrad, int pinMemory) {
    // Allocate memory for the Tensor object
    Tensor* tensor = (Tensor*)malloc(sizeof(Tensor));
    if (!tensor) {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Initialize the Tensor members
    tensor->data = NULL;  // Data can be allocated later depending on use
    tensor->device = (device) ? strdup(device) : NULL;  // Copy the device string
    tensor->requiresGrad = requiresGrad;
    tensor->pinMemory = pinMemory;

    return tensor;
}

// Delete function
void delete_tensor(Tensor* tensor) {
    if (!tensor) {
        return;  // Do nothing if the tensor is NULL
    }

    // Free any dynamically allocated memory
    if (tensor->data) {
        free(tensor->data);  // Free the data if it's allocated
    }

    if (tensor->device) {
        free(tensor->device);  // Free the device string
    }

    // Free the tensor itself
    free(tensor);
}