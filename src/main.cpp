#include <iostream>
#include <stdlib.h> 
#include <filesystem>

namespace fs = std::filesystem;

void cout(std::string msg) {
    std::cout << "> " + msg + "\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout("This is a drag-n-drop handler for conversion.");
        cout("Drag the USM file you want to convert onto this EXE and watch the magic happen!\n");
        cout("For more specific commands, use the terminal instead.\n");
        system("pause");
        return 0;
    }
    fs::path path = fs::current_path();
    fs::current_path(path);
    fs::path filepath = argv[1];

    std::string command = "UsmToolkit.exe convert " + filepath.filename().string();

    system(command.c_str());
}