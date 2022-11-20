#include "common.h"

namespace virtual_machine_nsp {
const int kInstructionLength = 16;

//not used
/* inline int16_t TranslateInstruction(std::string &line) {  //？？？？
    // TODO: translate hex mode to binary mode
    int16_t binary = 0;
    if (line.size() == kInstructionLength) {
        for (int index = 0; index < kInstructionLength; index+=4) {
            result = (result << 1) | (line[index] & 1);
        }
    }
    return result;
} 
 */
const int kVirtualMachineMemorySize = 0xFFFF;

class memory_tp {
    private:
    int8_t memory[kVirtualMachineMemorySize];

    public:
    memory_tp() {
        memset(memory, 0, sizeof(int8_t) * kVirtualMachineMemorySize);
    }
    // Managements
    void ReadMemoryFromFile(std::string filename, int beginning_address=0x3000);
    int8_t GetContent(int address) const;
    int8_t& operator[](int address);
};

}; // virtual machine nsp