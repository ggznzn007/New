﻿using System;

namespace _Operators
{
    class Program
    {
        static void Main(string[] args)
        {
            /*// 01 Operators
            Console.WriteLine(3 + 4 * 5);
            Console.WriteLine((3 + 4) * 5);
            Console.WriteLine(3 * 4 / 5);
            Console.WriteLine(4 / 5 * 3);

            int a = 10, b = 20, c;
            Console.WriteLine(c = a + b);*/

            /*// 02 ArithmeticOperators
            Console.WriteLine("정수의 계산");
            Console.WriteLine(123 + 45);
            Console.WriteLine(123 - 45);
            Console.WriteLine(123 * 45);
            Console.WriteLine(123 / 45);
            Console.WriteLine(123 % 45);

            Console.WriteLine("\n실수의 계산");
            Console.WriteLine(123.45 + 67.89);
            Console.WriteLine(123.45 - 67.89);
            Console.WriteLine(123.45 * 67.89);
            Console.WriteLine(123.45 / 67.89);
            Console.WriteLine(123.45 % 67.89);*/

            /*// 03 DivdeByZero, try ~ catch == 예외처리
            int x = 10, y = 0;

            try
            {
                Console.WriteLine(x / y);
            }
            catch(Exception e)
            {
                Console.WriteLine(e.Message);
            }*/

            // 04 OverflowException_checked
            Console.WriteLine("int.MaxValue = {0}", int.MaxValue);
            int x = int.MaxValue, y = 0;
            y = x + 10;
            Console.WriteLine("int.MaxValue +10 = {0}", y);
        }
    }
}