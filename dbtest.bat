@echo off

g++ dbtest.cpp lib/sqlite3.dll -o dbtext.exe && dbtext.exe
DEL dbtext.exe
