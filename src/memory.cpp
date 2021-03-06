#include "memory.h"
#include "globals.h"
#include <assert.h>
#include <iostream>

// initialize memory contents
Memory::Memory(size_t size)
{
	types::Byte data[size];
}

Memory::~Memory()
{
}

//**DEBUG FUNCTIONS**//
void Memory::printBlock(unsigned int baseAddress, size_t size)
{
	for (int i = baseAddress; i < size; i++) 
	{
		std::cout << std::hex << "[" << (int)Memory::data[i] << "], ";
	}
		
	std::cout << std::endl;
}