#ifndef DATA_ACCESS
#define DATA_ACCESS

#include "sqlite3.h"


class DataAccess {
    protected:
        sqlite3 *db;
        int check;

    public:
        DataAccess();

        void insertRepo(int id, const char* path);
        void insertUser(int id, const char* email);
        void insertStats(int repoID, int userID, const char* stat, const char* val);
        const char* getUserStat(int userID, const char* stat);

        ~DataAccess();
};

#endif
