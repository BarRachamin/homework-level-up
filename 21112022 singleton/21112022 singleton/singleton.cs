using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
using singleton;
using System.IO;

namespace Manager
{
    public class Manager
    {
        Hashtable Tbl = new Hashtable();
        private Manager()
        {

        }
        private static Manager _Manager = new Manager();
        public static Manager NManager { get { return _Manager; } }



        public void LoadTable()
        {
            Random rndNum = new Random();
            int Rnum;
            int Rball;

            for (int i = 1; i < 1000; i++)
            {

                if ((Rnum = rndNum.Next(100, 9999)) % 2 == 0)
                {

                    // put the  Falafel  key and the value in the hashtable 
                    Falafel Pita = new Falafel(Rnum);
                    Rball = rndNum.Next(1, 5);
                    Pita.randomBalls(Rball);
                    if (Tbl.ContainsKey(Pita.Id))
                    {
                        Tbl.Add(Pita.Id, Pita);
                    }
                }
                else
                {
                    // put the  Icecream  key and the value in the hashtable
                    IceCream iceCreamCone = new IceCream(Rnum);
                    Rball = rndNum.Next(1, 5);
                    iceCreamCone.randomball(Rball);

                    if (!Tbl.ContainsKey(iceCreamCone.Id))
                    {
                        Tbl.Add(iceCreamCone.Id, iceCreamCone);
                    }


                }

            }



           
            for (int i = 0; i < 20; i++)
            {
                

                int check;
                Console.WriteLine("Please enter a number between 100 to 9999");
                check = Convert.ToInt32(Console.ReadLine());
                if (Tbl.ContainsKey(check))
                {
                    if (Tbl[check] is IceCream)
                    {
                        IceCream iceTbl = (IceCream)Tbl[check];
                        Console.WriteLine("This Ice-Cream has " + iceTbl.ballNumber + " Balls");
                    }
                    else
                    {
                        Falafel falafeltbl = (Falafel)Tbl[check];
                        Console.WriteLine("This Pita has " + falafeltbl.ballNumber + " Balls of Falafel");

                    }

                }

            }



        }
    }

}
