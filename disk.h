#ifndef DISK_H
#define DISK_H

#include "globals.h"

class Disk
{
private:
	// memory size in Bytes (4 Bytes in a word)
	static const unsigned int diskSize = 2048 * 4; // 2048 words
	
public:
	Disk();
	~Disk();

};

#endif // DISK_H
