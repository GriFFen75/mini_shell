cmake_minimum_required(VERSION 3.22)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c mylib/mystring.c mylib/mystring.h mylib/mycd.c mylib/mycd.h HLib.h mylib/myls.c mylib/myls.h mylib/myrmdir.c mylib/myrmdir.h mylib/myrename.c mylib/myrename.h mylib/myecho.c mylib/myecho.h mylib/mymd.c mylib/mymd.h mylib/mypwd.c mylib/mypwd.h mylib/myhelp.c mylib/myhelp.h mylib/mytouch.c mylib/mytouch.h mylib/myhistory.c mylib/myhistory.h mylib/mydate.c mylib/mydate.h mylib/mytime.c mylib/mytime.h mylib/mycls.c mylib/mycls.h)
