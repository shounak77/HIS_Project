#include <iostream>
#include<cstring>


void display(char *values){
    char array[32];
    std:: strcpy(array, values);
    std:: cout << values << "\n";
    std:: cout << "Size: " << sizeof(values) << "\n";
}

int main(int argc, char** argv) {
    std::cout << "Hello Brave New World!\n";
    std::cout << "Args #: " << argc - 1 << "\nVal(s): \n";
    for(int i = 1; i < argc; ++i){
        display(argv[i]);
    }
    return 0;
}
