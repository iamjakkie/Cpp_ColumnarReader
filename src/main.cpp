#include <iostream>
#include <fcntl.h>
#include <sys/stat.h>
#include <fstream>

#include "parquet/api/reader.h"

int main() {
    // static constexpr int64_t FOOTER_READ_SIZE = 64*1024;
    // static constexpr uint32_t FOOTER_SIZE = 8;
    // static constexpr uint8_t MAGIC[4] = {'P', 'A', 'R', '1'};
    // std::ifstream readBin("../src/userdata1.parquet", std::ios::in | std::ios::binary);
    // readBin.seekg(0, std::ios::end);
    // int64_t fileSize = readBin.tellg();
    // readBin.seekg(0, std::ios::end);

    // if(fileSize < FOOTER_SIZE){
    //     throw std::runtime_error("File is corrupted");
    // }

    // uint8_t footerBuffer[FOOTER_READ_SIZE];
    // int64_t footerReadSize = std::min(fileSize, FOOTER_READ_SIZE);



}