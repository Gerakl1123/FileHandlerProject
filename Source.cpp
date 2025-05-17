#include"FileHandler.h"


int main(void)
{
	setlocale(LC_ALL, "RU");
	
	//stack

	FileHandl stack("stack");
	stack.writeline("Hello Stack");

	//heap
	auto heap = FileHandl::createFileHandler("heap");
	heap->writeToFile(heap, "Alaa");
	auto heap2 = heap;
	heap2->writeToFile(heap2, "Cat!");
	std::cout <<" USE count ptr" << heap.use_count()<<"\n";  // 2
	return 0;
}