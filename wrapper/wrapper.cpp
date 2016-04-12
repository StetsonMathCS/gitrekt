#include <iostream>
#include "wrapper.h"
using namespace std;

//Initialize libgit2
wrapper::wrapper()
{
	git_libgit2_init();
	cout << "libgit2 initialized!" << endl;
}

int main()
{
	wrapper::wrapper();
	return 0;
}
