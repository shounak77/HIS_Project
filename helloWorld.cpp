#include <iostream>
#include<cstring>


void display(char *values){
    char array[32];
    std:: strcpy(array, values);
    std:: cout << values << "\n";
    std:: cout << "Size: " << sizeof(array) << "\n";
}

int main(int argc, char** argv) {
    std::cout << "Hello World!\n";
    std::cout << "Argument count: " << argc - 1 << "\nValue(s): \n";
    for(int i = 1; i < argc; ++i){
        display(argv[i]);
    }
    return 0;
}
