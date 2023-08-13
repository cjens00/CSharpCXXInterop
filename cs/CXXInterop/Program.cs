using System;
using System.Runtime.InteropServices;

class Program {
    [DllImport("demolibrary.dll")]
    static extern int add_two_numbers(int a, int b);
    public static void Main(String[] args) {
        Console.WriteLine("Adding two numbers using an unmanaged function (native) compiled from C/CXX.");
        int result = add_two_numbers(50, 75);
        Console.WriteLine($"50 + 75 = {result}");
    }
}
