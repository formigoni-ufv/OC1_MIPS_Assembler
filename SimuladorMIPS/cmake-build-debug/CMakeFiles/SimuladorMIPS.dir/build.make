# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SimuladorMIPS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SimuladorMIPS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimuladorMIPS.dir/flags.make

CMakeFiles/SimuladorMIPS.dir/main.c.obj: CMakeFiles/SimuladorMIPS.dir/flags.make
CMakeFiles/SimuladorMIPS.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SimuladorMIPS.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimuladorMIPS.dir\main.c.obj   -c "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\main.c"

CMakeFiles/SimuladorMIPS.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimuladorMIPS.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\main.c" > CMakeFiles\SimuladorMIPS.dir\main.c.i

CMakeFiles/SimuladorMIPS.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimuladorMIPS.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\main.c" -o CMakeFiles\SimuladorMIPS.dir\main.c.s

CMakeFiles/SimuladorMIPS.dir/main.c.obj.requires:

.PHONY : CMakeFiles/SimuladorMIPS.dir/main.c.obj.requires

CMakeFiles/SimuladorMIPS.dir/main.c.obj.provides: CMakeFiles/SimuladorMIPS.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\SimuladorMIPS.dir\build.make CMakeFiles/SimuladorMIPS.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/SimuladorMIPS.dir/main.c.obj.provides

CMakeFiles/SimuladorMIPS.dir/main.c.obj.provides.build: CMakeFiles/SimuladorMIPS.dir/main.c.obj


CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj: CMakeFiles/SimuladorMIPS.dir/flags.make
CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj: ../intrucoesmips.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimuladorMIPS.dir\intrucoesmips.c.obj   -c "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\intrucoesmips.c"

CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\intrucoesmips.c" > CMakeFiles\SimuladorMIPS.dir\intrucoesmips.c.i

CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\intrucoesmips.c" -o CMakeFiles\SimuladorMIPS.dir\intrucoesmips.c.s

CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.requires:

.PHONY : CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.requires

CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.provides: CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.requires
	$(MAKE) -f CMakeFiles\SimuladorMIPS.dir\build.make CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.provides.build
.PHONY : CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.provides

CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.provides.build: CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj


CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj: CMakeFiles/SimuladorMIPS.dir/flags.make
CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj: ../simuladormips.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimuladorMIPS.dir\simuladormips.c.obj   -c "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\simuladormips.c"

CMakeFiles/SimuladorMIPS.dir/simuladormips.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimuladorMIPS.dir/simuladormips.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\simuladormips.c" > CMakeFiles\SimuladorMIPS.dir\simuladormips.c.i

CMakeFiles/SimuladorMIPS.dir/simuladormips.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimuladorMIPS.dir/simuladormips.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\simuladormips.c" -o CMakeFiles\SimuladorMIPS.dir\simuladormips.c.s

CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.requires:

.PHONY : CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.requires

CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.provides: CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.requires
	$(MAKE) -f CMakeFiles\SimuladorMIPS.dir\build.make CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.provides.build
.PHONY : CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.provides

CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.provides.build: CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj


CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj: CMakeFiles/SimuladorMIPS.dir/flags.make
CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj: ../auxiliary.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SimuladorMIPS.dir\auxiliary.c.obj   -c "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\auxiliary.c"

CMakeFiles/SimuladorMIPS.dir/auxiliary.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimuladorMIPS.dir/auxiliary.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\auxiliary.c" > CMakeFiles\SimuladorMIPS.dir\auxiliary.c.i

CMakeFiles/SimuladorMIPS.dir/auxiliary.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimuladorMIPS.dir/auxiliary.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\auxiliary.c" -o CMakeFiles\SimuladorMIPS.dir\auxiliary.c.s

CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.requires:

.PHONY : CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.requires

CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.provides: CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.requires
	$(MAKE) -f CMakeFiles\SimuladorMIPS.dir\build.make CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.provides.build
.PHONY : CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.provides

CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.provides.build: CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj


# Object files for target SimuladorMIPS
SimuladorMIPS_OBJECTS = \
"CMakeFiles/SimuladorMIPS.dir/main.c.obj" \
"CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj" \
"CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj" \
"CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj"

# External object files for target SimuladorMIPS
SimuladorMIPS_EXTERNAL_OBJECTS =

SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/main.c.obj
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/build.make
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/linklibs.rsp
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/objects1.rsp
SimuladorMIPS.exe: CMakeFiles/SimuladorMIPS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable SimuladorMIPS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SimuladorMIPS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimuladorMIPS.dir/build: SimuladorMIPS.exe

.PHONY : CMakeFiles/SimuladorMIPS.dir/build

CMakeFiles/SimuladorMIPS.dir/requires: CMakeFiles/SimuladorMIPS.dir/main.c.obj.requires
CMakeFiles/SimuladorMIPS.dir/requires: CMakeFiles/SimuladorMIPS.dir/intrucoesmips.c.obj.requires
CMakeFiles/SimuladorMIPS.dir/requires: CMakeFiles/SimuladorMIPS.dir/simuladormips.c.obj.requires
CMakeFiles/SimuladorMIPS.dir/requires: CMakeFiles/SimuladorMIPS.dir/auxiliary.c.obj.requires

.PHONY : CMakeFiles/SimuladorMIPS.dir/requires

CMakeFiles/SimuladorMIPS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SimuladorMIPS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SimuladorMIPS.dir/clean

CMakeFiles/SimuladorMIPS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS" "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS" "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug" "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug" "D:\Cloud_Storage\OneDrive\Faculdade\Semestre 3\CCF252 OC I\TPs\TP1 - Projeto Montador MIPS\SimuladorMIPS\cmake-build-debug\CMakeFiles\SimuladorMIPS.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SimuladorMIPS.dir/depend

