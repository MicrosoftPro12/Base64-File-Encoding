//
//  main.cpp
//  Base64 File Encoding
//
//  Created by 56789 01234 on 2024/4/6.
//

#include <iostream>
#include <fstream>
#include "base64.h"
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string a;
    cout << "将开始Base64编码，请输入你所需要编码的文件名（包括扩展名）：";
    cin >> a;
    ifstream is(a, ifstream::in | ios::binary);
    is.seekg(0, is.end);
    int length = is.tellg();
    is.seekg(0, is.beg);
    
    char *buffer = new char[length];
    is.read(buffer, length);
    string img = aip::base64_encode(buffer, length);
    cout << img << endl;
    delete[]buffer;
    is.close();
    return 0;
}
