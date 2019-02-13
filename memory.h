#ifndef MEMORY_H
#define MEMORY_H

#include "globals.h"

class Memory
{
private:
	// memory size in Bytes (4 Bytes in a word)
	static const unsigned int memorySize = 1024 * 4; // 1024 words
	
public:
	Memory();
	~Memory();

};

#endif // MEMORY_H
