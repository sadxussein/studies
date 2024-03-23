#include <iostream>

class bad_length : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override {
        return "Line of the forbidden length detected. Program terminated.";
    }
};

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw bad_length();
    } else {
        return str.length();
    }
}

int main() {
    std::cout << "Input forbidden line length: " << std::endl;
    int length;
    std::cin >> length;
    std::string input;
    while(true) {
        std::cout << "Input line: " << std::endl;
        std::cin >> input;
        try {
            int res = function(input, length);
            std::cout << "Word length is " << res << std::endl;
        } catch (const bad_length & e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }

    return 0;
}
