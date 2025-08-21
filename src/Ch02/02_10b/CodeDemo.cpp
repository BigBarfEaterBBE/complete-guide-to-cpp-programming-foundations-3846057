// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -132.45f;
    sprite_x = target_x;
    player_x = sprite_x;

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Target X (int32_t): " << sprite_x << std::endl;
    std::cout << "Target X (uint32_t): " << player_x << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
