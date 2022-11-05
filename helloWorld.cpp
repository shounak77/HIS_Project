#include <iostream>
#include <cstring>


void print_vals_to_stdout(char *values){
    char array[32];
    std:: strcpy(array, values);
    std:: cout << values << "\n";
    std:: cout << "Size: " << sizeof(array) << "\n";
}

int main(int argc, char** argv) {
    std::cout << "Hello Brave New World!\n";
    std::cout << "Args #: " << argc - 1 << "\nVal(s): \n";
    for(int i = 1; i < argc; ++i){
        print_vals_to_stdout(argv[i]);
    }
    return 0;
}
