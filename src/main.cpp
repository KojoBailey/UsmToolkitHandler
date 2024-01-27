#include <iostream>
#include <stdlib.h> 
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

namespace fs = std::filesystem;
using json = nlohmann::ordered_json;

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

    std::ifstream config_file("config.json");
    json config = json::parse(config_file);
    if (config["flags"].is_null()) {
        config["flags"] = "--clean";
        std::ofstream config_out("config.json");
        config_out << config.dump(2);
    }

    std::string command = "UsmToolkit.exe convert " + filepath.filename().string();
    if (config["flags"] != "") {
        command += " " + to_string(config["flags"]);
    }

    system(command.c_str());
}