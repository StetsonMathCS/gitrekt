#include "GitProfile.h"
#include "sampledata.h"

#include <iostream>

GitProfile::GitProfile(std::string user)
{
    gitUser = user;
}

std::string GitProfile::getBranches()
{
    std::string *branches = sampledata::getBranches("azack");
    
    return branches;
}

std::string GitProfile::getBranchesCreated()
{
    std::string *branches = sampledata::getBranchesCreated("azack");

    return branches;
}

std::string GitProfile::getBranchesDeleted()
{
    std::string *branches = sampledata::getBranchesDeleted("azack");

    return branches;
}

std::string GitProfile::getCommitsPerBranch(std::string branch)
{
    std::string *commits = sampledata::getCommitsPerBranch("report_generation");

    return commits;
}

int GitProfile::getBrokeBuildCommitsPerBranch(std::string branch)
{
    int commits = sampledata::getBrokeBuildCommitsPerBranch("report_generation");

    return commits;
}

int GitProfile::getBrokeTestCaseCommitsPerBranch(std::string branch)
{
    int commits = sampledata::getBrokeBuildCommitsPerBranch("report_generation");

    return commits;
}

int GitProfile::getBrokenCommitsPerBranch(std::string branch)
{
    int commits = sampledata::getBrokenCommitsPerBranch("report_generation");

    return commits;
}

int GitProfile::getDumpsOfCodePerBranch(std::string branch)
{
    int dumps = sampledata::getDumpsOfCodePerBranch("report_generation");

    return dumps;
}

std::string getTimePerCommit(std::string commit)
{
    std::string time = sampledata::getTimePerCommits("af1e634");

    return time;
}

int GitProfile::getLinesPerCommit(std::string commit)
{
    int lines = sampledata::getLinesPerCommit("af1e634");

    return lines;
}

int GitProfile::getCommentsLinesPerCommit(std::string commit)
{
    int lines = sampledata::getCommentsLinesPerCommit("af1e634");

    return lines;
}

int GitProfile::getNoncommentsLinesPerCommit(std::string commit)
{
    int lines = sampledata::getNoncommentsLinesPerCommit("af1e634");

    return lines;
}

int GitProfile::getNewCodeLinesPerCommit(std::string commit)
{
    int lines = sampledata::getNewCodeLinesPerCommit("af1e634");

    return lines;
}

int GitProfile::getChangedLinesPerCommit(std::string commit)
{
    int lines = sampledata::getChangedLinesPerCommit("af1e634");

    return lines;
}

int GitProfile::getLinesPerCommitPerBranch(std::string branch)
{
    int lines = sampledata::getLinesPerCommitPerBranch("report_generation");

    return lines;
}

int getDumpsOfCode()
{
    int dumps = sampledata::getDumpsOfCode();

    return dumps;
}