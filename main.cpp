#include <iostream>
#include "memory.h"
#include "disk.h"

int main()
{
	 //   initialize disk with size 2048
	 //   initialize ram with size 1024
	 //   create cpus
	 //   create scheduler
	 //   call driver to load the file
	
	/**DEBUGGING**/
	
	// test
	
	Memory	ram 	= Memory(1024 * 4); // initialize RAM
	Disk 	disk  	= Disk	(2048 * 4); // initialize disk
	
	// write
	int x = -1234;
	disk.write(0, &x, sizeof(x));
	
	// show disk data
	std::cout << "first 32 bytes of data:" << std::endl;
	disk.printBlock(0, 32);
	
	// read
	int y;
	disk.read(0, &y, sizeof(y));
	
	// check if it read and wrote properly
	std::cout << std::dec << "value of y: " << y << std::endl;
}