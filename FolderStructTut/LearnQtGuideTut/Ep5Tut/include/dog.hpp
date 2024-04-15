#ifndef DOG_HPP
#define DOG_HPP


#include <iostream>
#include <string>

class Dog{
    public:
        explicit Dog(std::string name_param);//explicit keyword is used to avoid implicit conversion
        Dog() = default;//default constructor
        ~Dog();//destructor

        std::string get_name() const{
            return dog_name;
        }

        void set_dog_name(const std::string &name){
            dog_name = name;
        }

        void print_info(){
            std::cout << "Dog name: " << dog_name << std::endl;
        }

        private:
            std::string dog_name {"Puffy"};

};

#endif //DOG_HPP