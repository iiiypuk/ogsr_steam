#include <stdio.h>
#include <windows.h>

int main()
{
	char CurrentPath[FILENAME_MAX];

	_getcwd(CurrentPath, sizeof(CurrentPath));
	SetCurrentDirectory("bin_x64");
	_getcwd(CurrentPath, sizeof(CurrentPath));

	system("xrEngine.exe");

	return 0;
}
