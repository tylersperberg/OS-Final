#include "disk.h"
#include "globals.h"
#include <iostream>

Disk::Disk(size_t size)
{
	types::Byte data[size];
}

Disk::~Disk()
{
}

//**DEBUG FUNCTIONS**//
void Disk::printBlock(unsigned int baseAddress, size_t size)
{
	for (int i = baseAddress; i < size; i++) 
	{
		std::cout << std::hex << "[" << (int)data[i] << "], ";
	}
		
	std::cout << std::endl;
}
