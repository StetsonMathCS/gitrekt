#include <string>
#include <vector>

#ifndef SAMPLEDATA_H
#define SAMPLEDATA_H

class sampledata
{
    public:
        std::vector<std::string> getBranches(std::string user);
        std::vector<std::string> getBranchesCreated(std::string user);
        std::vector<std:string> getBranchesDeleted(std::string user);
        std::vector<std::string> getCommitsPerBranch(std::string branch);
        int getBrokeBuildCommitsPerBranch(std::string branch);
        int getBrokeTestCaseCommitsPerBranch(std::string branch);
        int getBrokenCommitsPerBranch(std::string branch);
        int getDumpsOfCodePerBranch(std::string branch);
        std::string getTimePerCommit(std::string commit);
        int getLinesPerCommit(std::string commit);
        int getCommentsLinesPerCommit(std::string commit);
        int getNoncommentsLinesPerCommit(std::string commit);
        int getNewCodeLinesPerCommit(std::string commit);
        int getChangedLinesPerCommit(std::string commit);
        int getLinesPerCommitPerBranch(std::string branch);
        int getDumpsOfCode();
};

#endif
