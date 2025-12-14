#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;

    return lines;
}

void printToScreen(const std::vector<std::string>& lines) {
}

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
}

int main() {
    std::cout << "Программа для работы с текстовыми файлами" << std::endl;

    std::vector<std::string> data = readFromFile("input.txt");
    printToScreen(data);
    writeToFile(data, "output.txt");

    return 0;
}
