#include <iostream>

std::vector<std::string> sampledata::getBranches(std::string user)
{
    std::vector<std::string> branches;

    if(user == "azack")
    {
        branches.push_back("report_generation");
        branches.push_back("html");
        branches.push_back("git_profile");
    }

    return branches;
}

std::vector<std::string> sampledata::getBranchesCreated(std::string user)
{
    std::vector<std::string> branches;

    if(user == "azack")
    {
        branches.push_back("report_generation");
        branches.push_back("wt");
        branches.push_back("html");
        branches.push_back("data");
        branches.push_back("git_profile");
    }

    return branches;
}

std::vector<std::string> sampledata::getBranchesDeleted(std::string user)
{
    std::vector<std::string> branches;

    if(user == "azack")
    {
        branches.push_back("wt");
        branches.push_back("data");
    }

    return branches;
}

std::vector<std::string> sampledata::getCommitsPerBranch(std::string branch)
{
    std::vector<std::string> commits;

    if(branch == "report_generation")
    {
        commits.push_back("af1e634");
        commits.push_back("85fefde");
        commits.push_back("5d4c687");
    }

    return commits;
}

int sampledata::getBrokeBuildCommitsPerBranch(std::string branch)
{
    if(branch == "report_generation")
    {
        return 1;
    }

    return 0;
}

int sampledata::getBrokeTestCaseCommitsPerBranch(std::string branch)
{
    if(branch == "report_generation")
    {
        return 1;
    }

    return 0;
}

int sampledata::getBrokenCommitsPerBranch(std::string branch)
{
    if(branch == "report_generation")
    {
        return 2;
    }

    return 0;
}

int sampledata::getDumpsOfCodePerBranch(std::string branch)
{
    if(branch == "report_generation")
    {
        return 1;
    }

    return 0;
}

std::string sampledata::getTimePerCommit(std::string commit)
{
    if(commit == "af1e634")
    {
        return "May 25";
    }

    return " ";
}

int sampledata::getLinesPerCommit(std::string commit)
{
    if(commit == "af1e634")
    {
        return 25;
    }

    return 0;
}

int sampledata::getCommentsLinesPerCommit(std::string commit)
{
    if(commit == "af1e634")
    {
        return 12;
    }

    return 0;
}

int sampledata::getNoncommentsLinesPerCommit(std::string commit)
{
    if(commit == "af1e634")
    {
        return 13;
    }

    return 0;
}

int sampledata::getNewCodeLinesPerCommit(std::string commit)
{
    if(commit == "af1e634")
    {
        return 5;
    }

    return 0;
}

int sampledata::getChangedLinesPerCommit(std::string commit)
{
    if(commit == "af1e634")
    {
        return 20;
    }

    return 0;
}

int sampledata::getLinesPerCommitPerBranch(std::string branch)
{
    if(branch == "report_generation")
    {
        return 124;
    }

    return 0;
}

int sampledata::getDumpsOfCode()
{
    return 400;
}
