#include <iostream>

int main()
{
	 //   initialize disk with size 2048
	 //   initialize ram with size 1024
	 //   create cpus
	 //   create scheduler
	 //   call driver to load the file
	
	/**DEBUGGING**/
	
	// memory test
	
	// write
	int x = -1234;
	Memory::writeMemory(0, &x, sizeof(x));
	
	// show memory
	std::cout << "first 32 bytes of memory:" << std::endl;
	Memory::printMemBlock(0, 32);
	
	// read
	int y;
	Memory::readMemory(0, &y, sizeof(y));
	
	// check if it read and wrote properly
	std::cout << std::dec << "value of y: " << y << std::endl;
}