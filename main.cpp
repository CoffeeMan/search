#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "tree.h"
#include "catalog.h"

int main(int  argc, char * argv[])
{
	if (argc < 3)
		return -1;
	FILE* fout;
	fout = fopen(argv[1], "w");
	NODE* root = NULL;
	char path[1000];
	strcpy(path, argv[2]);
	root = Create(path);
	root = MakeTree(path, root);
	Print(root, 0, fout);
	fclose(fout);
	root = DelTree(root);
	return 0;
}
