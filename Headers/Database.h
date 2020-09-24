#ifndef DATABASE_H
#define DATABASE_H //DO NOT REMOVE THESE HEADERS ELSE WILL RESULT IN ERROR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqlite/sqlite3.h" 

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

void db(){
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;
   char username[50], password[50];

   printf("Enter username\n");
   fgets(username, sizeof(username), stdin);
   if (username[strlen(username)-1] == '\n') username[strlen(username)-1] = '\0';
   printf("Enter password\n");
   fgets(password, sizeof(password), stdin);
   if (password[strlen(password)-1] == '\n') password[strlen(password)-1] = '\0';
   
   /* Open database */
   rc = sqlite3_open("signupdb.sqlite", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return;
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO USER_INFO (USERNAME,PASSWORD) "  \
         "VALUES (username,password); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }
   sqlite3_close(db);
   return;
  
}
#endif
