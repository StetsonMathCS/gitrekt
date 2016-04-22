#include <string>

#ifndef GITPROFILE_H
#define GITPROFILE_H

class GitProfile
{
    public:
        GitProfile(std::string user);
        std::string getBranches();
        std::string getBranchesCreated();
        std::string getBranchesDeleted();
        std::string getCommitsPerBranch(std::string branch);
        int getDumpsOfCodePerBranch(std::string branch);
        int getLinesPerCommit(std::string commit);
        int getCommentLinesPerCommit(std::string commit);
        int getNoncommentsLinesPerCommit(std::string commit);
        int getNewCodeLinesPerCommit(std::string commit);
        int getChangedLinesPerCommit(std::string commit);
        int getLinesPerCommitPerBranch(std::string branch);
        int getDumpsOfCode();
};

#endif
