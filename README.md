# gitrekt

Team *: Laura Davis
        Anand Dwivedi
        Thomas Ingui
        Bryan Pearson
        Andrew Sheridan
        Blake Shipman
        Andrew Tompkins
        Eddie White
        Acacia Zack

git user profile project:

given a git repository, make a "user profile" for every contributor

support only C++ for now

profile info:

graph of lines of code (git blame) over time (every commit) on given branch (line graph)

given a tester command (make test), find out % of user's commits on given branch that broke the build and/or test cases

ratio of contribution types:

avg % of each commit that is comments or txt files

avg % of each commit that is totally new code vs. changed lines

avg # of commits that seem to be dumps of code (e.g., importing libraries)

which branches the user created & deleted (via merging or deletion)

time range user was contributing: bar chart of commits over time (grouped by day or whatever)

what else?

subteams:



2 people: create git wrapper functions for common operations (must stay in contact with other group members to know their needs) -- use 
the libgit2 library

        tom & bryan

2 people: report generation (your choice: HTML+graphics, PDF, GUI, whatever)

        andrew & andrew & acacia

2 people: save/retrieve data in sqlite

        anand & laura

2 people: GUI for selection a repo, running report generator, viewing reports (either in GUI or launching browser or whatever)

        eddie & blake


features:

git wrapper functions:

provide application-specific functions around libgit2 so other code does not need to access libgit2 functions

define a variety of such functions

e.g., int getCountOfUserLines(filename)

report generation:

a single page for each user mentioned in the repo; one page profile summary

start by assuming you can get a list of users, and generate a blank report (with a header, some placeholders)

then fill in the details bit by bit (easy stuff first) - if database is not functional yet, just hardcode some data in vectors or 
whatever, and iterate through those

save data, retrieve data:

use sqlite

define tables and relations based on what profile data will be stored

GUI:

file directory/repository selector

indicate if that directory has no git repo

button to start analysis

each analysis is saved to database

show prior analyses saved previously

button to generate report, and open viewer


Requirements for everyone:

public github repo

must track issues on github issue tracker

must create a Makefile with "make test" target which builds program and runs some test cases

test cases must grow over time, as features are implemented

must implement 2+ features per week

every commit to master must pass tests

I only grade commits on master

your grade is based (partly) on % of lines of code in master commits (shown by "git blame")

you will receive four grades, one per week; overall, the project is worth 10% of final grade (homework is 30%)
