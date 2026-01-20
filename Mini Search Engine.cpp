
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

void searchInFile(std::string fileName, std::string searchWord) {
    std::ifstream file(fileName);
    std::string line;
    int lineNumber = 0;
    bool found = false;

    if (!file.is_open()) {
        std::cout << "Error: Could not open file " << fileName << std::endl;
        return;
    }

    std::cout << "Searching for \"" << searchWord << "\" in " << fileName << "..." << std::endl;

    while (std::getline(file, line)) {
        lineNumber++;
        if (line.find(searchWord) != std::string::npos) {
            std::cout << "[Line " << lineNumber << "]: " << line << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No matches found." << std::endl;
    }

    file.close();
}

int main() {
    std::string filename;
    std::string keyword;

    std::cout << "--- Mini Search Engine ---" << std::endl;

    std::cout << "Enter file name: ";
    std::cin >> filename;

    std::cout << "Enter keyword to search: ";
    std::cin >> keyword;

    std::cout << "--------------------------" << std::endl;

    searchInFile(filename, keyword);

    return 0;
}

