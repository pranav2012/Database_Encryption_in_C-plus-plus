@echo off
cd src/obj && gcc -c ../include/Database.cpp
cd ..
g++ dbtest.c obj/Database.o lib/sqlite3.dll -o dbtest.exe && dbtest.exe
DEL dbtest.exe
cd src/obj && DEL Database.o
cd ..
