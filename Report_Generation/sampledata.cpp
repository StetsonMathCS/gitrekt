#include <iostream>

std::string sampledata::getBranches(std::string user)
{
    if(user == "azack")
    {
        std::string branches = new std::string[3];
        branches[0] = "report_generation";
        branches[1] = "html";
        branches[2] = "git_profile";

        return branches; 
    }

    return " ";
}

std::string sampledata::getBranchesCreated(std::string user)
{
    if(user == "azack")
    {
        std::string branches = new std::string[5];
        branches[0] = "report_generation";
        branches[1] = "wt";
        branches[2] = "html";
        branches[3] = "data";
        branches[4] = "git_profile";

        return branches;
    }

    return " ";
}

std::string sampledata::getBranchesDeleted(std::string user)
{
    if(user == "azack")
    {
        std::string branches = new std::string[2];
        branches[0] = "wt";
        branches[1] = "data";

        return branches;
    }

    return " ";
}

std::string sampledata::getCommitsPerBranch(std::string branch)
{
    if(branch == "report_generation")
    {
        std::string commits = new std::string[3];
        commits[0] = "af1e634"
        commits[1] = "85fefde";
        commits[2] = "5d4c687";
    }

    return " ";
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
