﻿using System;
using System.Threading;

namespace ConTimer
{
    class Pro
    {
        static void Main()
        {
            Console.Write("Enter the time in seconds: ");
            int time = Convert.ToInt32(Console.ReadLine());
            for(int i = 0; i<time;i++)
            {
                Thread.Sleep(500);
                Console.WriteLine("Tic");
                Thread.Sleep(500);
                Console.WriteLine("Tok");
            }

            Console.WriteLine("Time is up!");
        }
    }
}