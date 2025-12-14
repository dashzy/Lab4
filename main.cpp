#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        std::cerr << "File opening error: " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();

    return lines;
}

void printToScreen(const std::vector<std::string>& lines) {

}

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {

}

int main() {

    std::cout << "A program for working with text files" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    std::vector<std::string> data = readFromFile("input.txt");
//аня
    printToScreen(data);
    writeToFile(data, "output.txt");

    std::cout << "The program is completed <3" << std::endl;
    return 0;
}
