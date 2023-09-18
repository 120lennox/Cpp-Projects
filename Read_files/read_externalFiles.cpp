#include <iostream>
#include <fstream>
#include <sstream>
#include <vector> // Include the vector library

int main() {
    std::ifstream input_file;
    input_file.open("mytext.txt");

    if (!input_file.is_open()) {
        std::cout << "Failed to open the file" << std::endl;
        return 1; // Exit with an error code
    }

    std::vector<std::vector<std::string>> linesAndWords; // 2D vector to store lines and words

    std::string line;
    while (std::getline(input_file, line)) {
        // Use a stringstream to split the line into words
        std::istringstream string_stream(line);
        std::string word;

        std::vector<std::string> wordsInLine; // Vector to store words in the current line

        while (string_stream >> word) {
            wordsInLine.push_back(word); // Store words in the current line
        }

        linesAndWords.push_back(wordsInLine); // Store the vector of words in the 2D vector
    }

    std::cout << "Number of lines: " << linesAndWords.size() << std::endl;
    
    for (size_t i = 0; i < linesAndWords.size(); ++i) {
        std::cout << "Line " << i + 1 << ": ";
        
        for (size_t j = 0; j < linesAndWords[i].size(); ++j) {
            std::cout << linesAndWords[i][j] << " ";
        }
        
        std::cout << std::endl;
    }

    input_file.close(); // Close the file

    return 0;
}
