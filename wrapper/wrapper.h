#ifndef WRAPPER_H
#define WRAPPER_H

#include <git2.h>
using namespace std;

class wrapper
{
	private:

	public:
		//Initialize libgit2
		wrapper(const char*);

		//Get the total number of commits
		int getCommitCount(git_repository*);
		
		//Get the total number of commits by 
		//a certain author or email
		int getCommitCount(git_repository*, string);

		//Get the total number of lines committed	
		int getLinesCommitted(git_repository*);

		//Get the total number of lines committed 
		//by a certain author or email
		int getLinesCommitted(git_repository*, string);
};

#endif
