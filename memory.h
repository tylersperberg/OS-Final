#ifndef MEMORY_H
#define MEMORY_H

#include "globals.h"
#include <cstdlib>
// Memory indexes are per byte.

class Memory
{
private:
	// memory size in bits
	static const unsigned int MEMORY_SIZE = 1024 * 4; // 1024 words * 4 bytes

	// memory contents
	static types::Byte data[MEMORY_SIZE];
	
public:
	// reads memory and stores it in the buffer
	// needs the base address, pointer to the buffer, and number of bytes to be read ( must not exceed sizeof(buffer) )
	template<typename T>
	static void readMemory(int baseAddress, T* buffer, size_t dataSize);
	
	// writes memory at the specified base address with the data given in the buffer
	// needs the base address, pointer to the buffer, and number of bytes to be written ( must not exceed sizeof(buffer) )
	template<typename T>
	static void writeMemory(int baseAddress, T* buffer, size_t dataSize);
};

#include "memory.template"

#endif // MEMORY_H
