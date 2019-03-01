#ifndef DISK_H
#define DISK_H

#include "globals.h"
#include <cstdlib>

class Disk
{
private:
	// disk contents
	types::Byte data[];
	
public:
	Disk(size_t size);
	~Disk();
	
	// reads disk and stores it in the buffer
	// needs the base address, pointer to the buffer, and number of bytes to be read ( must not exceed sizeof(buffer) )
	template<typename T>
	void read(unsigned int baseAddress, T* buffer, size_t dataSize);
	
	// writes data to disk at the specified base address with the data given in the buffer
	// needs the base address, pointer to the buffer, and number of bytes to be written ( must not exceed sizeof(buffer) )
	template<typename T>
	void write(unsigned int baseAddress, T* buffer, size_t dataSize);
	
	/**DEBUG FUNCTIONS**/
	// print the contents of a block given a base address and size of block
	void printBlock(unsigned int baseAddress, size_t size);

};

#include "disk.template"

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
