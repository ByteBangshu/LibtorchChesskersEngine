#include <torch/torch.h>
#include <iostream>  

int main() {
    torch::Tensor tensor = torch::rand({2, 3});
    std::cout << "Tensor: " << "Yay!!" << std::endl;
    return 0;
}