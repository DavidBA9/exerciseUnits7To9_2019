//DAVID BERENGUER ANTON
// TextWithoutA
using System;

class TextWithoutA
{
    static void Main()
    {
        string text;
        bool findA = false;
        do
        {
            Console.WriteLine("Enter the text");
            text = Console.ReadLine();
            foreach (char letter in text)
            {
                if(letter == 'A' || letter == 'a')
                {
                    findA = true;
                }
            }
        } while (findA);
    }
}
