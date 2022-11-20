#include "common.h"
#include "memory.h"
#include <boost/program_options.hpp>

namespace virtual_machine_nsp {
    void memory_tp::ReadMemoryFromFile(std::string filename, int beginning_address) {
        // Read from the file(binary)
        // TO BE DONE
        std::ifstream input(filename);
        int16_t current_address = beginning_address;
        std::string line;
        int i;
        while (getline(input, line)) { 
            //默认小端
            //低位字节
            for (i = 8; i < 16; ++i) {
                memory[current_address] += (line[i] - '0') * pow(2, 15 - i); 
            }
            current_address ++;
            //高位字节
            for (i = 0; i < 8; ++i) {
                memory[current_address] += (line[i] - '0') * pow(2, 7 - i); 
            }
            current_address ++;
        }
    }

    int8_t memory_tp::GetContent(int address) const {
        // get the content 
        return memory[address];
    }

    int16_t& memory_tp::operator[](int address) {
        // get the content of 2 bytes
        // TO BE DONE (Error: mem is 8bytes while reg is 16bytes, you have to combine 2 elements into ONE class while copying)
        return memory[address]; //error
    }
}; // virtual machine namespace