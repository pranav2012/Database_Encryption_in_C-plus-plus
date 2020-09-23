@echo off

gcc dbtest.c lib/sqlite3.dll -o dbtext.exe && dbtext.exe
DEL dbtext.exe
