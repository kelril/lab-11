#ifndef UNTITLED_CONSTANTS_H
#define UNTITLED_CONSTANTS_H
const std::string command_1 = "cmake -H. -B_build -DCMAKE_INSTALL_" + std::string("PREFIX=_install -DCMAKE_BUILD_TYPE=");
const std::string command_2 = "cmake --build _build";
const std::string command_3 = "cmake --build _build --target install";
const std::string command_4 = "cmake --build _build --target package";
#endif //UNTITLED_CONSTANTS_H
