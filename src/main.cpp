#include <iostream>
#include "interpreter.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Alescript v1.2\nUsage: interpreter <program_file>\n";
        return 1;
    }

    Interpreter interpreter(argv[1]);
    if (!interpreter.loadProgram(argv[1])) {
        std::cerr << "Could not load program: " << argv[1] << "\n";
        return 1;
    }

    interpreter.run();
    return 0;
}
