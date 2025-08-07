#include "Buffer/StaticBuffer.h"
#include "Cache/OpenRelTable.h"
#include "Disk_Class/Disk.h"
#include "FrontendInterface/FrontendInterface.h"
#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  //Initialize the Run Copy of Disk 
  Disk disk_run;
  // StaticBuffer buffer;
  // OpenRelTable cache;
	unsigned char buffer[BLOCK_SIZE];
	Disk::readBlock(buffer,7000);
	char message[] = "hello";
	memcpy(buffer+6,message,6);
	Disk::writeBlock(buffer,7000);
	unsigned char buffer2[BLOCK_SIZE];
	Disk::readBlock(buffer2,7000);
	char message2[6];
	memcpy(message2,buffer+6,6);
	std::cout<<message2 <<std::endl ;

//  return FrontendInterface::handleFrontend(argc, argv);
//	return 0;*/

//int main(int argc, char *argv[]){
//	Disk disk_run;
	unsigned char buffer3[BLOCK_SIZE];
	Disk::readBlock(buffer3,0);
	for(int i=0;i<2047;i++){
		std::cout << (int)buffer3[i] << " "; 	
	} //std::cout << (int)buffer3[] << " ";
return 0;
}
