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

    // Âðåìåííûé âûâîä äëÿ îòëàäêè - ÓÄÀËÈÒÜ ÏÅÐÅÄ ÑËÈßÍÈÅÌ!
    std::cout << "DEBUGGING THE READING FUNCTION" << std::endl;
    std::cout << "_____________________________________" << std::endl;
    std::cout << "Lines read: " << lines.size() << std::endl;
    for (size_t i = 0; i < lines.size(); ++i) {
        std::cout << "[" << i + 1 << "] " << lines[i] << std::endl;
    }
    std::cout << "_____________________________________" << std::endl;

    return lines;
}

// ôóíêöèÿ 2, àíÿ
void printToScreen(const std::vector<std::string>& lines) {
    std::cout << "\n=== SCREEN OUTPUT ===" << std::endl;
    if (lines.empty()) {
        std::cout << "The vector is empty. No data to display." << std::endl;
    } else {
        for (size_t i = 0; i < lines.size(); ++i) {
            std::cout << "Line " << i + 1 << ": " << lines[i] << std::endl;
        }
    }
    std::cout << "=====================\n" << std::endl;
}

// ôóíêöèÿ 3, àíÿ
void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    std::ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        std::cerr << "Error creating file: " << filename << std::endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << std::endl;
    }

    outputFile.close();
    std::cout << "Data successfully written to file: " << filename << std::endl;
}

int main() {
    std::cout << "A program for working with text files" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    std::vector<std::string> data = readFromFile("input.txt");

    printToScreen(data);
    writeToFile(data, "output.txt");

    std::cout << "\nThe program is completed <3" << std::endl;
    return 0;
}
}
