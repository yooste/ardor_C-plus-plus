#include <iostream>

int BoxValue(int length, int width=1, int height=1);

int main(void)
{
	std::cout<<"[3, 3, 3] : "<<BoxValue(3,3,3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxValue(5,5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxValue(7)<<std::endl;
	//std::cout<<"[D, D, D] : "<<BoxValue()<<std::endl;
	return 0;
}

int BoxValue(int length, int width, int height)
{
	return length*width*height;
}
