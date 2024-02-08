class Complexe
    {
        private double pr;                                  //partie réelle
        private double pi;                                  //partie imaginaire
 
        public double Pr
        {
            get { return pr; }
            set { pr = value; }
        }
        
        public double Pi
        {
            get { return pi; }
            set { pi = value; }
        }
 
        public Complexe() { }
 
        public Complexe(double pr, double pi)
        {
            this.pr = pr;
            this.pi = pi;
        }
 
        public Complexe Plus(Complexe c)               //La méthode retourne un objet (référence)
        {
            double r, i;
            r = this.pr + c.pr;
            i = this.pi + c.pi;
 
            Complexe rs = new Complexe(r, i);
            return rs;
 
            //ou retrun new Complexe(this.pr + c.pr, this.pi + c.pi)
 
 
        }
 
        public Complexe Moins(Complexe c)                //La méthode retourne un objet (référence)
        {
            double r, i;
            r = this.pr - c.pr;                         
            i = this.pi - c.pi;
 
            Complexe rs = new Complexe(r, i);
            return rs;
 
            //ou retrun new Complexe(this.pr - c.pr, this.pi - c.pi)
        }
 
        public void Afficher()
        {
            if (pi == 0)
                Console.Out.WriteLine(pr);
            else if (pi > 0)
            {
                if (pi == 1)
                    Console.Out.WriteLine(pr + "+i");
                else
                    Console.Out.WriteLine(pr + "+" + pi + "i");
            }
            else
            {
                if(pi==-1)
                Console.Out.WriteLine(pr + "-i");
                else
                Console.Out.WriteLine(pr + "" + pi + "i");
            }
        }
    }
