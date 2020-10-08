#include <stdio.h>
#include <windows.h>

#include "resource.h"

int main()
{
	char CurrentPath[FILENAME_MAX];

	_getcwd(CurrentPath, sizeof(CurrentPath));
	SetCurrentDirectory("bin_x64");
	_getcwd(CurrentPath, sizeof(CurrentPath));

	// Run S.T.A.L.K.E.R.
	system("xrEngine.exe");

	return 0;
}
