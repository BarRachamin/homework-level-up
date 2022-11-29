using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace singleton
{
    internal class Falafel
    {
        private  int _FalafelId;

        public int Id { get { return _FalafelId; } }

        private int _FalafelballNumber;

        public int ballNumber { get { return _FalafelballNumber; } }

       public Falafel(int id)
        {
            _FalafelId = id;
        }



        public void randomBalls(int num)
        {
            _FalafelballNumber= num;
        }

    }
}
