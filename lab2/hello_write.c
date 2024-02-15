#include <unistd.h>

int main(int argc, char **argv) {
    const char *message = "Hello, world!\n";
    write(1, message, 14);
    
    return 0;
}
