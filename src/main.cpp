#include <iostream>
#include <spdlog/spdlog.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    spdlog::info("Info from spdlog");
    spdlog::error("Error from spdlog");
    spdlog::debug("This is a debug message");
    spdlog::warn("{:>30}", "right aligned by 30");
    return 0;
}