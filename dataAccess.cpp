#include "dataAccess.h"
#include "sqlite3.h"
#include <cstdlib>
#include <iostream>
using namespace std;

DataAccess(){
    check = sqlite3_open("gitData.db", &db);
    if(check != 0){
        cout << "Couldn't open gitData.db: " << sqlite3_errcode(db) <<endl;
        exit(1);
    }
}

void DataAccess::insertRepo(int id, const char* path){
    char *errmsg;
    check = sqlit3_exec(db, "INSERT INTO repos VALUES (id, path);", NULL, NULL, &errmsg);
    if(check != SQLITE_OK){
        cout << "Error Inserting into table: " << errmsg << endl;
        sqlite3_free(errmsg);
    }
}

void DataAccess:: insertUser(int id, const char* email){
    char* errmsg;
    check = sqlite3_exec(db, "INSERT INTO users VALUES (id, email);", NULL, NULL, &errmsg);
    if(check != SQLITE_OK){
        cout << "Error inserting into table: " << errmsg << endl;
        sqlite3_free(errmsg);
    }
}

void DataAccess::insertStats(int repoID, int userID, const char* stat, const char* val){
    char* errmsg;
    check = sqlite3_exec(db, "INSERT INTO repostats VALUES (repoID, userID, stat, val);", NULL, NULL, &errmsg);
    if(check != SQLITE_OK){
        cout << "Error inserting into table: " << errmsg << endl;
        sqlite3_free(errmsg);
    }
}

const char* DataAccess:: getUserStat(int userID, const char* stat){
    sqlite3_stmt *u;
    sqlite3_stmt *r;
    sqlite3_stmt *sv;

    const char *sqlu = "SELECT * FROM users ORDER BY id";
    const char *sqlr = "SELECT * FROM repos ORDER BY id";
    const char *sqlsv = "SELECT * FROM repostats ORDER BY repoID";

    check = sqlite3_prepare(db, sqlu, strlen(sqlu), &u, NULL);
    if(check != SQLITE_OK){
        cout << "Error preparing statement of users." << endl;
    }
    check = sqlite3_prepare(db, sqlr, strlen(sqlr), &r, NULL);
    if(check != SQLITE_OK){
        cout << "Error prepareing statement of repos." << endl;
    }
    check = sqlite3_prepare(db, sqlsv, strlen(sqlsv), &sv, NULL);
    if(check != SQLITE_OK){
        cout << "ERROR prepareing statement of stats." << endl;
    }

    const char *email;
    const char *repo;
    const char *value;
    const char *result;

    while(sqlite3_step(u) == SQLITE_ROW){
        if(userID == sqlite3_column_int(u, 0)){
            email = sqlite3_column_text(u, 1);
        }
    }

    while(sqlite3_step(sv) == SQLITE_ROW){
        if(userID == sqlite3_column_int(sv, 1) && stat == sqlite3_column_text(sv, 2)){
            int repoID = sqlite3_column_int(sv, 0);
            while(sqlite3_step(r) == SQLITE_ROW){
                if(repoID == sqlite3_column_int(r, 0)){
                    repo = sqlite3_column_text(r, 1);
                }
            }
            value = sqlite3_column_text(sv, 3);
            result = result + "Email: " + email + " Repo: " + repo + " " + stat + ": " + value + ". ";
        }
    }
    return result;
}
~DataAccess(){
    sqlite3_close(db);
}
