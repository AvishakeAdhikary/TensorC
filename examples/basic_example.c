#include <stdio.h>
#include "../include/TensorC.h"

int main() {
    // Create a tensor
    Tensor* myTensor = create_tensor("CPU", 1, 0);
    if (myTensor) {
        printf("Tensor created on device: %s\n", myTensor->device);
        
        // Delete the tensor when done
        delete_tensor(myTensor);
    } else {
        printf("Tensor creation failed!\n");
    }
    
    return 0;
}