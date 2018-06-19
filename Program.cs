using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rdm = new Random();
                int cle = rdm.Next(0, 26);
                        Console.WriteLine("        *********************************************");
                        Console.WriteLine("        *********************************************");
                        Console.WriteLine("        ****                                     ****");
                        Console.Write("        ****");
                        Console.WriteLine("    Your encryptage key is :    " + cle + "   ****");
                        Console.Write("        ****");
                        Console.WriteLine("    Set a text to encrypte :         ****");
                        Console.WriteLine("        ****                                     ****");
                        Console.WriteLine("        *********************************************");
                        Console.WriteLine("        *********************************************");
                        Console.WriteLine();
                string text = Console.ReadLine();
            //Console.WriteLine(text);
            byte[] ASCIIValues = Encoding.ASCII.GetBytes(text);
            List<string> chaines = new List<string>();
                foreach (byte b in ASCIIValues)
                {
                    if (b != 32)
                    {
                       int e = (b + cle);
                       int unicode = e;
                       char character = (char)unicode;
                       string encoded = character.ToString();
                       chaines.Add(encoded);
                    }
                
                    else
                    {                  
                       int unicode = b;
                       char character = (char)unicode;
                       string encoded = character.ToString();
                       chaines.Add(encoded);
                    }             
                }
                        Console.WriteLine();
                        Console.WriteLine("*****************************************************");
                        Console.WriteLine();
                        Console.Write("    ");
                        Console.WriteLine("Your encrypted text is :");
                        Console.WriteLine();
                        Console.WriteLine("*****************************************************");
                        Console.WriteLine();
                foreach (string encode in chaines)
                {
                        Console.Write(encode);
                }
            Console.ReadKey();
        }
    }
}
