// Memory is byte-accessible

#ifndef MEMORY_H
#define MEMORY_H

#include "globals.h"
#include <cstdlib>

class Memory
{
private:
	// memory size in Bytes
	static const unsigned int MEMORY_SIZE = 1024 * 4; // 1024 Words * 4 Bytes

	// memory contents
	types::Byte data[MEMORY_SIZE];
	
public:
	Memory();
	~Memory();

	// reads memory and stores it in the buffer
	// needs the base address, pointer to the buffer, and number of bytes to be read ( must not exceed sizeof(buffer) )
	template<typename T>
	void readMemory(unsigned int baseAddress, T* buffer, size_t dataSize);
	
	// writes memory at the specified base address with the data given in the buffer
	// needs the base address, pointer to the buffer, and number of bytes to be written ( must not exceed sizeof(buffer) )
	template<typename T>
	void writeMemory(unsigned int baseAddress, T* buffer, size_t dataSize);
	
	/**DEBUG FUNCTIONS**/
	// print the contents of a memory block given a base address and size of block
	void printMemBlock(unsigned int baseAddress, size_t size);
};

#include "memory.template"

#endif // MEMORY_H