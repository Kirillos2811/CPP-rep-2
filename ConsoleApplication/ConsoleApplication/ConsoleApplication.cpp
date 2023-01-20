#include <stdio.h>
#include <stdexcept>
#include <string>
using namespace std;

class FileWasNotOpenedException : public runtime_error
{
public:
	FileWasNotOpenedException() : runtime_error("File could not be opened") {}
};

void readFile(string name, char* buff)
{	
	FILE* file_ptr;
	errno_t err;

	err = fopen_s(&file_ptr, name.c_str(), "r");
	int buff_len = sizeof(buff) / sizeof(buff[0]);
	
	if (file_ptr != NULL) {
		fgets(buff, buff_len, file_ptr);
		fclose(file_ptr);
	}
	else {
		throw FileWasNotOpenedException();
	}
}

int main()
{
	try
	{	
		char buff[1000];
		readFile("nothing.txt", buff);
		printf("File content:");
		puts(buff);
	}
	catch (const FileWasNotOpenedException& ex)
	{
		printf(ex.what());
	}
	return 0;
}

