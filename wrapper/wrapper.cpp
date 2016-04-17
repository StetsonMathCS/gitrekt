#include <iostream>
#include "wrapper.h"
using namespace std;

/*
 * Initialize libgit2
 */
wrapper::wrapper()
{
	git_libgit2_init();
}

/*
 * Get the total number of commits in a repository,
 * given a certain directory
 */
int wrapper::getCommitCount(const char* directory)
{
	git_repository *repository = NULL;
	
	//Repository does not exist; commit count is 0
	if(git_repository_open(&repository, directory) != 0)
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
 * Get the total number of commits in a repository,
 * given a directory and an author
 */
int wrapper::getCommitCount(const char* directory, string author)
{
	git_repository *repository = NULL;
	
	//Repository does not exist; commit count is 0
	if(git_repository_open(&repository, directory) != 0)
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
		if(name == author) i++;
		git_commit_free(c);
	}	

	//Free the repository, return the value
	git_repository_free(repository);
	return i;
}

/*
 * Main file purely used to compile the code
 */
int main()
{
	wrapper *w = new wrapper();
	const char *directory = "/home/bpearson/csci221/final-project/gitrekt";
	string author = "bpearson";
	cout << w-> getCommitCount(directory, author);
	delete w;
	return 0;
}
