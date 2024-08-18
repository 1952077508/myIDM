//
// Created by hua on 24-8-18.
//

#include "SolutionTest.h"

#include <iostream>
#include <string>

void SolutionTest::solutionTest() {
    std::cout << "Hello, World!" << std::endl;
}

void SolutionTest::downloadOneFileWithOneThreadTest() {
    std::cout << "download One File With One Thread Test Begin:" << std::endl;
    std::string url = "https://avatars.githubusercontent.com/u/63577261?v=4";
    std::string savePath = "../files/demo.jpg";

    std::cout << "download One File With One Thread Test End." << std::endl;
}
