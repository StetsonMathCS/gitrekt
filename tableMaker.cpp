#include <iostream>
#include "sqlite3.h"
#include <cstdlib>
using namespace std;

int main(){
    sqlite3 *db;
    int check;

    check = sqlite3_open("gitData.db", &db);
    if(check != 0){
        cout << "Couldn'topen gitData.db: " << sqlite3_errcode(db) << endl;
        exit(1);
    }
    cout << "Opened gitData.db" << endl;

    cout << "Creating tables..." << endl;
    char *errmsg;
    check = sqlite3_exec(db, "CREATE TABLE repos (id int, path text);", NULL, NULL, &errmsg);
    if(check != SQLITE_OK){
        cout << "Error creating repos table: " << errmsg << endl;
        sqlite3_free(errmsg);
    }

    check = sqlite3_exec(db, "CREATE TABLE users (id int, email text);", NULL, NULL, &errmsg);
    if(check != SQLITE_OK){
        cout << "Error creating users table: " << errmsg << endl;
        sqlite3_free(errmsg);
    }

    check = sqlite3_exec(db, "CREATE TABLE repoStats (repoID int, userID int, stat text, val int);", NULL, NULL, &errmsg);
    if(check != SQLITE_OK){
        cout << "Error creating repoStats table: " << errmsg << endl;
        sqlite3_free(errmsg);
    }

    sqlite3_close(db);

    return 0;
}
