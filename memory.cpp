#include "memory.h"
#include "globals.h"
#include <assert.h>
#include <iostream>

// initialize memory contents
types::Byte Memory::data[MEMORY_SIZE];

//**DEBUG FUNCTIONS**//
void Memory::printMemBlock(unsigned int baseAddress, size_t size)
{
	for (int i = baseAddress; i < size; i++) 
	{
		std::cout << std::hex << "[" << (int)Memory::data[i] << "], ";
	}
		
	std::cout << std::endl;
}