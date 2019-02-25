#ifndef DISK_H
#define DISK_H

#include "globals.h"

class Disk
{
private:
	// memory size in Bytes (4 Bytes in a word)
	static const unsigned int DISK_SIZE = 2048 * 4; // 2048 words
	
public:
	Disk();
	~Disk();

};
//initializeDisk(size) {
//    size = size * 8;
//    create array data[size * 8];
//}
//void write(address, value) {
//    use data array to write
//}
//char read(address) { //address will be between 0 and 2048
//    use data array to read
//}

#endif // DISK_H
