#ifndef UNTITLED_CONSTANTS_H
#define UNTITLED_CONSTANTS_H
std::string command_1 = "cmake -H. -B_build -DCMAKE_INSTALL_" + std::string("PREFIX=_install -DCMAKE_BUILD_TYPE=");
std::string command_2 = "cmake --build _build";
std::string command_3 = "cmake --build _build --target install";
std::string command_4 = "cmake --build _build --target package";
#endif //UNTITLED_CONSTANTS_H
