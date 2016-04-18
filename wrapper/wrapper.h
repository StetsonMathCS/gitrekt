#ifndef WRAPPER_H
#define WRAPPER_H

#include <git2.h>
using namespace std;

class wrapper
{
	private:

	public:
		//Initialize libgit2
		wrapper();

		//Get the total number of commits
		int getCommitCount(const char*);
		
		//Get the total number of commits by 
		//a certain author or email
		int getCommitCount(const char*, string);

		//Get the total number of lines committed	
		int getLinesCommitted(const char*);

		//Get the total number of lines committed 
		//by a certain author or email
		int getLinesCommitted(const char*, string);
};

#endif
