#include <iostream>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[])
{
    char *name = NULL;

    if (argc > 1)
        name = argv[1];

    if (name) {
        std::cout << "Hello " << name << "!\n";
    }
    else
        std::cout << "Hello world!!!\n";

    return 0;
}
