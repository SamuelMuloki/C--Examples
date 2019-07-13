//
//  main.cpp
//  fileSystem
//
//  Created by samuel muloki on 13/05/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, const char * argv[]) {
    std::cout << "Current path "<<fs::current_path();
    std::cout<<std::endl<<std::endl;
    return 0;
}
