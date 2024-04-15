#include "dog.hpp"
#include <iostream>

Dog::Dog(std::string name_param) : dog_name(name_param){
    std::cout << "Dog object is created with name: " << dog_name << std::endl;
}

/* Dog::Dog(std::string name_param) : dog_name(name_param): This is the constructor for the Dog class. It takes a std::string parameter name_param. The part after the colon (: dog_name(name_param)) is called an initializer list. It's used to directly initialize the dog_name member variable of the Dog class with the value of name_param. This is a more efficient way to initialize member variables compared to assigning them values inside the constructor body.

std::cout << "Dog object is created with name: " << dog_name << std::endl;: This line is executed after the member initialization. It prints a message to the standard output (usually the console) indicating that a Dog object has been created and displays the name of the dog. */

Dog::~Dog(){
    std::cout << "Dog object is destroyed with name: " << dog_name << std::endl;
}