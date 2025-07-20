#include<iostream>

class Dog{
    public: 
        Dog() = default;
        Dog(const std::string& name, const std::string& breed, int& age);
        ~Dog();
        std::string getName();
        std::string getName() const;
        const std::string& getNameV2() const;
        std::string getBreed();
        int* getAge();

    private:
        std::string name;
        std::string breed;
        int* agePtr = {nullptr};
};