#include <iostream>

// Misc readings
// https://en.cppreference.com/w/cpp/language/cast_operator
// https://stackoverflow.com/questions/15999123/const-before-parameter-vs-const-after-function-name-c

// Interfaces
struct T {
    std::string a;
    std::string b;
    std::string c;

    operator std::string() const {
        return this->a;
    }
};

void log(std::string, std::string, std::string);
void log(T, T, T);

// Implementations
void log(std::string a, std::string b, std::string c) {
    std::cout << "A = " << a << ", B = " << b << ", C = " << c << std::endl;
}

void log(T a, T b, T c) {
    std::cout << "T A = " << a.a << ", T B = " << b.b << ", T C = " << c.c << std::endl;
}

int main() {
    T a = {"TFoo"};
    T b = {"TFoo", "TBro"};
    T c = {"TFoo", "TBro", "TBro"};
    log("foo", "bar", "bro");
    log(a, b, c);
    log("Foo", "Bar", c);
    return 0;
}