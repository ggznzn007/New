﻿using System;
using System.Collections.Generic;

namespace Queue_T
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue<string> que = new Queue<string>();
            que.Enqueue("Tiger");
            que.Enqueue("Lion");
            que.Enqueue("Zebra");
            que.Enqueue("Cow");
            que.Enqueue("Rabbit");
            PrintQueue("que: ", que);

            Console.WriteLine(" Dequeuing '{0}'", que.Dequeue());
            Console.WriteLine(" Peek: '{0}'", que.Peek());

            Queue<string> que2 = new Queue<string>();
        }
    }
}