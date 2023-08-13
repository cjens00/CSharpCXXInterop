# C# Interoperability Demo

A very simple example of how native shared libraries written in C/C++ may easily have their functions called from within a C# .NET application.
Requires CMake 3.20+. Tested on Windows 11 Pro with MSVC, clang/llvm 16.0.6, and .NET 6, 7 (C# 10, 11) using CMake / Ninja and Visual Studio Code.

Please note: 
`You will need to copy demolibrary.dll into the output directory of the C# executable or change the path accordingly in Program.cs.`