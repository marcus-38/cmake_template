#include <iostream>
#include <spdlog/spdlog.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    spdlog::info("Info from spdlog");
    spdlog::error("Error from spdlog");

    return 0;
}