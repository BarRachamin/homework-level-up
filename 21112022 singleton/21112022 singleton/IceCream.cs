using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace singleton
{
    internal class IceCream
    {
        private  int _iceCreamId;

        public  int Id { get { return _iceCreamId; } }

        private  int _IceCreamballNumber;

        public int  ballNumber { get { return _IceCreamballNumber; } }

        public IceCream (int id)
        {
            _iceCreamId = id;
        }

        public void randomball(int num)
        {
            _IceCreamballNumber= num;
        }


    }
}
