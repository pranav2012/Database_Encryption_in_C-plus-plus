@echo off

cd src/obj && g++ -c ../include/Database.cpp ../include/File.cpp ../include/Login.cpp ../include/SignUp.cpp ../include/Encryptdecrypt.cpp ../include/loading.cpp ../include/Main.cpp ../include/users.cpp
cd .. && g++ main.cpp obj/Database.o  obj/Encryptdecrypt.o  obj/File.o  obj/loading.o  obj/Login.o  obj/Main.o  obj/users.o obj/SignUp.o lib/sqlite3.dll -o main.exe && main.exe
DEL main.exe obj/Database.o  obj/Encryptdecrypt.o  obj/File.o  obj/loading.o  obj/Login.o  obj/Main.o  obj/users.o obj/SignUp.oobj/Database.o  obj/Encryptdecrypt.o  obj/File.o  obj/loading.o  obj/Login.o  obj/Main.o  obj/users.o obj/SignUp.o
cd ..
