# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2022.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2022.1.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kali/CLionProjects/mini_shellG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kali/CLionProjects/mini_shellG/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled1.dir/flags.make

CMakeFiles/untitled1.dir/main.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/main.c.o: ../main.c
CMakeFiles/untitled1.dir/main.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled1.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/main.c.o -MF CMakeFiles/untitled1.dir/main.c.o.d -o CMakeFiles/untitled1.dir/main.c.o -c /home/kali/CLionProjects/mini_shellG/main.c

CMakeFiles/untitled1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/main.c > CMakeFiles/untitled1.dir/main.c.i

CMakeFiles/untitled1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/main.c -o CMakeFiles/untitled1.dir/main.c.s

CMakeFiles/untitled1.dir/mylib/mystring.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mystring.c.o: ../mylib/mystring.c
CMakeFiles/untitled1.dir/mylib/mystring.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/untitled1.dir/mylib/mystring.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mystring.c.o -MF CMakeFiles/untitled1.dir/mylib/mystring.c.o.d -o CMakeFiles/untitled1.dir/mylib/mystring.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mystring.c

CMakeFiles/untitled1.dir/mylib/mystring.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mystring.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mystring.c > CMakeFiles/untitled1.dir/mylib/mystring.c.i

CMakeFiles/untitled1.dir/mylib/mystring.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mystring.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mystring.c -o CMakeFiles/untitled1.dir/mylib/mystring.c.s

CMakeFiles/untitled1.dir/mylib/mycd.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mycd.c.o: ../mylib/mycd.c
CMakeFiles/untitled1.dir/mylib/mycd.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/untitled1.dir/mylib/mycd.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mycd.c.o -MF CMakeFiles/untitled1.dir/mylib/mycd.c.o.d -o CMakeFiles/untitled1.dir/mylib/mycd.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mycd.c

CMakeFiles/untitled1.dir/mylib/mycd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mycd.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mycd.c > CMakeFiles/untitled1.dir/mylib/mycd.c.i

CMakeFiles/untitled1.dir/mylib/mycd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mycd.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mycd.c -o CMakeFiles/untitled1.dir/mylib/mycd.c.s

CMakeFiles/untitled1.dir/mylib/myls.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myls.c.o: ../mylib/myls.c
CMakeFiles/untitled1.dir/mylib/myls.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/untitled1.dir/mylib/myls.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myls.c.o -MF CMakeFiles/untitled1.dir/mylib/myls.c.o.d -o CMakeFiles/untitled1.dir/mylib/myls.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myls.c

CMakeFiles/untitled1.dir/mylib/myls.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myls.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myls.c > CMakeFiles/untitled1.dir/mylib/myls.c.i

CMakeFiles/untitled1.dir/mylib/myls.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myls.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myls.c -o CMakeFiles/untitled1.dir/mylib/myls.c.s

CMakeFiles/untitled1.dir/mylib/myrmdir.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myrmdir.c.o: ../mylib/myrmdir.c
CMakeFiles/untitled1.dir/mylib/myrmdir.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/untitled1.dir/mylib/myrmdir.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myrmdir.c.o -MF CMakeFiles/untitled1.dir/mylib/myrmdir.c.o.d -o CMakeFiles/untitled1.dir/mylib/myrmdir.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myrmdir.c

CMakeFiles/untitled1.dir/mylib/myrmdir.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myrmdir.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myrmdir.c > CMakeFiles/untitled1.dir/mylib/myrmdir.c.i

CMakeFiles/untitled1.dir/mylib/myrmdir.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myrmdir.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myrmdir.c -o CMakeFiles/untitled1.dir/mylib/myrmdir.c.s

CMakeFiles/untitled1.dir/mylib/myrename.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myrename.c.o: ../mylib/myrename.c
CMakeFiles/untitled1.dir/mylib/myrename.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/untitled1.dir/mylib/myrename.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myrename.c.o -MF CMakeFiles/untitled1.dir/mylib/myrename.c.o.d -o CMakeFiles/untitled1.dir/mylib/myrename.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myrename.c

CMakeFiles/untitled1.dir/mylib/myrename.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myrename.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myrename.c > CMakeFiles/untitled1.dir/mylib/myrename.c.i

CMakeFiles/untitled1.dir/mylib/myrename.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myrename.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myrename.c -o CMakeFiles/untitled1.dir/mylib/myrename.c.s

CMakeFiles/untitled1.dir/mylib/myecho.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myecho.c.o: ../mylib/myecho.c
CMakeFiles/untitled1.dir/mylib/myecho.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/untitled1.dir/mylib/myecho.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myecho.c.o -MF CMakeFiles/untitled1.dir/mylib/myecho.c.o.d -o CMakeFiles/untitled1.dir/mylib/myecho.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myecho.c

CMakeFiles/untitled1.dir/mylib/myecho.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myecho.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myecho.c > CMakeFiles/untitled1.dir/mylib/myecho.c.i

CMakeFiles/untitled1.dir/mylib/myecho.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myecho.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myecho.c -o CMakeFiles/untitled1.dir/mylib/myecho.c.s

CMakeFiles/untitled1.dir/mylib/mymd.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mymd.c.o: ../mylib/mymd.c
CMakeFiles/untitled1.dir/mylib/mymd.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/untitled1.dir/mylib/mymd.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mymd.c.o -MF CMakeFiles/untitled1.dir/mylib/mymd.c.o.d -o CMakeFiles/untitled1.dir/mylib/mymd.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mymd.c

CMakeFiles/untitled1.dir/mylib/mymd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mymd.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mymd.c > CMakeFiles/untitled1.dir/mylib/mymd.c.i

CMakeFiles/untitled1.dir/mylib/mymd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mymd.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mymd.c -o CMakeFiles/untitled1.dir/mylib/mymd.c.s

CMakeFiles/untitled1.dir/mylib/mypwd.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mypwd.c.o: ../mylib/mypwd.c
CMakeFiles/untitled1.dir/mylib/mypwd.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/untitled1.dir/mylib/mypwd.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mypwd.c.o -MF CMakeFiles/untitled1.dir/mylib/mypwd.c.o.d -o CMakeFiles/untitled1.dir/mylib/mypwd.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mypwd.c

CMakeFiles/untitled1.dir/mylib/mypwd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mypwd.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mypwd.c > CMakeFiles/untitled1.dir/mylib/mypwd.c.i

CMakeFiles/untitled1.dir/mylib/mypwd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mypwd.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mypwd.c -o CMakeFiles/untitled1.dir/mylib/mypwd.c.s

CMakeFiles/untitled1.dir/mylib/myhelp.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myhelp.c.o: ../mylib/myhelp.c
CMakeFiles/untitled1.dir/mylib/myhelp.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/untitled1.dir/mylib/myhelp.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myhelp.c.o -MF CMakeFiles/untitled1.dir/mylib/myhelp.c.o.d -o CMakeFiles/untitled1.dir/mylib/myhelp.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myhelp.c

CMakeFiles/untitled1.dir/mylib/myhelp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myhelp.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myhelp.c > CMakeFiles/untitled1.dir/mylib/myhelp.c.i

CMakeFiles/untitled1.dir/mylib/myhelp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myhelp.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myhelp.c -o CMakeFiles/untitled1.dir/mylib/myhelp.c.s

CMakeFiles/untitled1.dir/mylib/mytouch.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mytouch.c.o: ../mylib/mytouch.c
CMakeFiles/untitled1.dir/mylib/mytouch.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/untitled1.dir/mylib/mytouch.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mytouch.c.o -MF CMakeFiles/untitled1.dir/mylib/mytouch.c.o.d -o CMakeFiles/untitled1.dir/mylib/mytouch.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mytouch.c

CMakeFiles/untitled1.dir/mylib/mytouch.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mytouch.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mytouch.c > CMakeFiles/untitled1.dir/mylib/mytouch.c.i

CMakeFiles/untitled1.dir/mylib/mytouch.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mytouch.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mytouch.c -o CMakeFiles/untitled1.dir/mylib/mytouch.c.s

CMakeFiles/untitled1.dir/mylib/myhistory.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myhistory.c.o: ../mylib/myhistory.c
CMakeFiles/untitled1.dir/mylib/myhistory.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/untitled1.dir/mylib/myhistory.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myhistory.c.o -MF CMakeFiles/untitled1.dir/mylib/myhistory.c.o.d -o CMakeFiles/untitled1.dir/mylib/myhistory.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myhistory.c

CMakeFiles/untitled1.dir/mylib/myhistory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myhistory.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myhistory.c > CMakeFiles/untitled1.dir/mylib/myhistory.c.i

CMakeFiles/untitled1.dir/mylib/myhistory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myhistory.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myhistory.c -o CMakeFiles/untitled1.dir/mylib/myhistory.c.s

CMakeFiles/untitled1.dir/mylib/mydate.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mydate.c.o: ../mylib/mydate.c
CMakeFiles/untitled1.dir/mylib/mydate.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/untitled1.dir/mylib/mydate.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mydate.c.o -MF CMakeFiles/untitled1.dir/mylib/mydate.c.o.d -o CMakeFiles/untitled1.dir/mylib/mydate.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mydate.c

CMakeFiles/untitled1.dir/mylib/mydate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mydate.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mydate.c > CMakeFiles/untitled1.dir/mylib/mydate.c.i

CMakeFiles/untitled1.dir/mylib/mydate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mydate.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mydate.c -o CMakeFiles/untitled1.dir/mylib/mydate.c.s

CMakeFiles/untitled1.dir/mylib/mytime.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mytime.c.o: ../mylib/mytime.c
CMakeFiles/untitled1.dir/mylib/mytime.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/untitled1.dir/mylib/mytime.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mytime.c.o -MF CMakeFiles/untitled1.dir/mylib/mytime.c.o.d -o CMakeFiles/untitled1.dir/mylib/mytime.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mytime.c

CMakeFiles/untitled1.dir/mylib/mytime.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mytime.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mytime.c > CMakeFiles/untitled1.dir/mylib/mytime.c.i

CMakeFiles/untitled1.dir/mylib/mytime.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mytime.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mytime.c -o CMakeFiles/untitled1.dir/mylib/mytime.c.s

CMakeFiles/untitled1.dir/mylib/mycls.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mycls.c.o: ../mylib/mycls.c
CMakeFiles/untitled1.dir/mylib/mycls.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/untitled1.dir/mylib/mycls.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mycls.c.o -MF CMakeFiles/untitled1.dir/mylib/mycls.c.o.d -o CMakeFiles/untitled1.dir/mylib/mycls.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mycls.c

CMakeFiles/untitled1.dir/mylib/mycls.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mycls.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mycls.c > CMakeFiles/untitled1.dir/mylib/mycls.c.i

CMakeFiles/untitled1.dir/mylib/mycls.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mycls.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mycls.c -o CMakeFiles/untitled1.dir/mylib/mycls.c.s

CMakeFiles/untitled1.dir/mylib/mygetpid.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mygetpid.c.o: ../mylib/mygetpid.c
CMakeFiles/untitled1.dir/mylib/mygetpid.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/untitled1.dir/mylib/mygetpid.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mygetpid.c.o -MF CMakeFiles/untitled1.dir/mylib/mygetpid.c.o.d -o CMakeFiles/untitled1.dir/mylib/mygetpid.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mygetpid.c

CMakeFiles/untitled1.dir/mylib/mygetpid.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mygetpid.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mygetpid.c > CMakeFiles/untitled1.dir/mylib/mygetpid.c.i

CMakeFiles/untitled1.dir/mylib/mygetpid.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mygetpid.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mygetpid.c -o CMakeFiles/untitled1.dir/mylib/mygetpid.c.s

CMakeFiles/untitled1.dir/mylib/mygetppid.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mygetppid.c.o: ../mylib/mygetppid.c
CMakeFiles/untitled1.dir/mylib/mygetppid.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/untitled1.dir/mylib/mygetppid.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mygetppid.c.o -MF CMakeFiles/untitled1.dir/mylib/mygetppid.c.o.d -o CMakeFiles/untitled1.dir/mylib/mygetppid.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mygetppid.c

CMakeFiles/untitled1.dir/mylib/mygetppid.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mygetppid.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mygetppid.c > CMakeFiles/untitled1.dir/mylib/mygetppid.c.i

CMakeFiles/untitled1.dir/mylib/mygetppid.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mygetppid.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mygetppid.c -o CMakeFiles/untitled1.dir/mylib/mygetppid.c.s

CMakeFiles/untitled1.dir/mylib/mygetuid.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mygetuid.c.o: ../mylib/mygetuid.c
CMakeFiles/untitled1.dir/mylib/mygetuid.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/untitled1.dir/mylib/mygetuid.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mygetuid.c.o -MF CMakeFiles/untitled1.dir/mylib/mygetuid.c.o.d -o CMakeFiles/untitled1.dir/mylib/mygetuid.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mygetuid.c

CMakeFiles/untitled1.dir/mylib/mygetuid.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mygetuid.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mygetuid.c > CMakeFiles/untitled1.dir/mylib/mygetuid.c.i

CMakeFiles/untitled1.dir/mylib/mygetuid.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mygetuid.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mygetuid.c -o CMakeFiles/untitled1.dir/mylib/mygetuid.c.s

CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o: ../mylib/mygetpidPereFils.c
CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o -MF CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o.d -o CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mygetpidPereFils.c

CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mygetpidPereFils.c > CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.i

CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mygetpidPereFils.c -o CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.s

CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o: ../mylib/mygetpid++.c
CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o -MF CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o.d -o CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mygetpid++.c

CMakeFiles/untitled1.dir/mylib/mygetpid++.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mygetpid++.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mygetpid++.c > CMakeFiles/untitled1.dir/mylib/mygetpid++.c.i

CMakeFiles/untitled1.dir/mylib/mygetpid++.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mygetpid++.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mygetpid++.c -o CMakeFiles/untitled1.dir/mylib/mygetpid++.c.s

CMakeFiles/untitled1.dir/mylib/myothercommand.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myothercommand.c.o: ../mylib/myothercommand.c
CMakeFiles/untitled1.dir/mylib/myothercommand.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/untitled1.dir/mylib/myothercommand.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myothercommand.c.o -MF CMakeFiles/untitled1.dir/mylib/myothercommand.c.o.d -o CMakeFiles/untitled1.dir/mylib/myothercommand.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myothercommand.c

CMakeFiles/untitled1.dir/mylib/myothercommand.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myothercommand.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myothercommand.c > CMakeFiles/untitled1.dir/mylib/myothercommand.c.i

CMakeFiles/untitled1.dir/mylib/myothercommand.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myothercommand.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myothercommand.c -o CMakeFiles/untitled1.dir/mylib/myothercommand.c.s

CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o: ../mylib/myexitctrlc.c
CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o -MF CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o.d -o CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/myexitctrlc.c

CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/myexitctrlc.c > CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.i

CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/myexitctrlc.c -o CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.s

CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o: ../mylib/mypathHistory.c
CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o: CMakeFiles/untitled1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building C object CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o -MF CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o.d -o CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o -c /home/kali/CLionProjects/mini_shellG/mylib/mypathHistory.c

CMakeFiles/untitled1.dir/mylib/mypathHistory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled1.dir/mylib/mypathHistory.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kali/CLionProjects/mini_shellG/mylib/mypathHistory.c > CMakeFiles/untitled1.dir/mylib/mypathHistory.c.i

CMakeFiles/untitled1.dir/mylib/mypathHistory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled1.dir/mylib/mypathHistory.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kali/CLionProjects/mini_shellG/mylib/mypathHistory.c -o CMakeFiles/untitled1.dir/mylib/mypathHistory.c.s

# Object files for target untitled1
untitled1_OBJECTS = \
"CMakeFiles/untitled1.dir/main.c.o" \
"CMakeFiles/untitled1.dir/mylib/mystring.c.o" \
"CMakeFiles/untitled1.dir/mylib/mycd.c.o" \
"CMakeFiles/untitled1.dir/mylib/myls.c.o" \
"CMakeFiles/untitled1.dir/mylib/myrmdir.c.o" \
"CMakeFiles/untitled1.dir/mylib/myrename.c.o" \
"CMakeFiles/untitled1.dir/mylib/myecho.c.o" \
"CMakeFiles/untitled1.dir/mylib/mymd.c.o" \
"CMakeFiles/untitled1.dir/mylib/mypwd.c.o" \
"CMakeFiles/untitled1.dir/mylib/myhelp.c.o" \
"CMakeFiles/untitled1.dir/mylib/mytouch.c.o" \
"CMakeFiles/untitled1.dir/mylib/myhistory.c.o" \
"CMakeFiles/untitled1.dir/mylib/mydate.c.o" \
"CMakeFiles/untitled1.dir/mylib/mytime.c.o" \
"CMakeFiles/untitled1.dir/mylib/mycls.c.o" \
"CMakeFiles/untitled1.dir/mylib/mygetpid.c.o" \
"CMakeFiles/untitled1.dir/mylib/mygetppid.c.o" \
"CMakeFiles/untitled1.dir/mylib/mygetuid.c.o" \
"CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o" \
"CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o" \
"CMakeFiles/untitled1.dir/mylib/myothercommand.c.o" \
"CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o" \
"CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o"

# External object files for target untitled1
untitled1_EXTERNAL_OBJECTS =

untitled1: CMakeFiles/untitled1.dir/main.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mystring.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mycd.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myls.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myrmdir.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myrename.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myecho.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mymd.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mypwd.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myhelp.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mytouch.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myhistory.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mydate.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mytime.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mycls.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mygetpid.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mygetppid.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mygetuid.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mygetpidPereFils.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mygetpid++.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myothercommand.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/myexitctrlc.c.o
untitled1: CMakeFiles/untitled1.dir/mylib/mypathHistory.c.o
untitled1: CMakeFiles/untitled1.dir/build.make
untitled1: CMakeFiles/untitled1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Linking C executable untitled1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled1.dir/build: untitled1
.PHONY : CMakeFiles/untitled1.dir/build

CMakeFiles/untitled1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled1.dir/clean

CMakeFiles/untitled1.dir/depend:
	cd /home/kali/CLionProjects/mini_shellG/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kali/CLionProjects/mini_shellG /home/kali/CLionProjects/mini_shellG /home/kali/CLionProjects/mini_shellG/cmake-build-debug /home/kali/CLionProjects/mini_shellG/cmake-build-debug /home/kali/CLionProjects/mini_shellG/cmake-build-debug/CMakeFiles/untitled1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled1.dir/depend

