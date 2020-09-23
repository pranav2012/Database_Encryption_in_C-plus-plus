@echo off

g++ main.cpp lib/sqlite3.dll -o main.exe && main.exe
DEL main.exe
