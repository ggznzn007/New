﻿using System;

namespace CS_01
{
    class Program
    {
        static void Main(string[] args)
        {
            /*int i; //01
            double x;

            i = 5;
            x = 3.141592;
            Console.WriteLine(" i == " + i + ", x == " + x);

            x = i;//암시적 형변환
            i = (int)x;
            Console.WriteLine(" i == " + i + ", x == " + x);*/

            bool b = true;
            char c = 'A';
            decimal d = 1.234m;//m은 decimal 형의 접미사
            double e = 1.23456789;
            float f = 1.23456789f;//f는 float 형의 접미사
            int i = 1234;
            string s = "Hello";

            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.WriteLine(d);
            Console.WriteLine(e);
            Console.WriteLine(f);
            Console.WriteLine(i);
            Console.WriteLine(s);
        }
    }
}