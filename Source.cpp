#include "search_path.h"
	int main()
	{
		Searcher searcher;
		searcher.FileToFind("CMakeLists.txt");
#ifdef _WIN32
		system("pause");
#elif defined(__linux__)
		(void)getchar();
#endif
		return 0;
	}