#include <iostream>
#include "wrapper.h"
using namespace std;

/**
 * Initialize libgit2
 */
wrapper::wrapper()
{
	git_libgit2_init();
}

/**
 * Open a repository at a certain directory
 */
git_repository* openRepository(string directory)
{	
	if(git_repository_open(&repository, directory) == 0) return repository;
	return NULL;
}


/**
 * Get the total number of commits in the repository
 */
int wrapper::getCommitCount(git_repository *repository)
{	
	//Repository does not exist; commit count is 0
	if(repository == NULL)
	{
		return 0;
	}

	//Walker for traversal
	git_revwalk *walker;
	git_revwalk_new(&walker, repository);
	git_revwalk_sorting(walker, GIT_SORT_TOPOLOGICAL | GIT_SORT_TIME);
	git_revwalk_push_head(walker);

	int i = 0;
	git_oid oid;

	//Iterate through the commits
	while(git_revwalk_next(&oid, walker) == 0)
	{
		git_commit *c;
		git_commit_lookup(&c, repository, &oid);
		i++;
		git_commit_free(c);
	}

	//Free the repository, return the value
	git_repository_free(repository);
	return i;
		
}

/**
 * Get the total number of commits in the repository,
 * given an author/email
 */
int wrapper::getCommitCount(git_repository *repository, string id)
{	
	//Repository does not exist; commit count is 0
	if(!valid)
	{
		return 0;
	}

	//Walker for traversal
	git_revwalk *walker;
	git_revwalk_new(&walker, repository);
	git_revwalk_sorting(walker, GIT_SORT_TOPOLOGICAL | GIT_SORT_TIME);
	git_revwalk_push_head(walker);

	int i = 0;
	git_oid oid;

	//Iterate through the commits
	while(git_revwalk_next(&oid, walker) == 0)
	{
		git_commit *c;
		git_commit_lookup(&c, repository, &oid);
		const git_signature *sig = git_commit_author(c);
		char *name = sig -> name;
		char *email = sig -> email;
		if(name == id || email == id) i++;
		git_commit_free(c);
	}	

	//Free the repository, return the value
	git_repository_free(repository);
	return i;
}

/**
 * Get the total number of lines committed to the repository
 */
int wrapper::getLinesCommitted(git_repository *repository)
{
		
	return 0;
}

/**
 * Get the total number of lines committed to the repository,
 * given an author/email
 */
int wrapper::getLinesCommitted(git_repository *repository, string id)
{
	return 0;
}

/**
 * Main file purely used to compile the code
 */
int main()
{
	const char *directory = "/home/bpearson/csci221/final-project/gitrekt";
	wrapper *w = new wrapper(directory);
	string author = "bpearson";
	cout << w-> getCommitCount(author);
	delete w;
	return 0;
}
