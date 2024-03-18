/*
Create a base class called Photon. Use this class to store a double type value of wavelength that 
could be used to calculate photon energy. Create class calculate_photonEnergy which will inherit photon energy.
Using these classes, calculate photon energy.
*/

#include<iostream>
#include<cmath>
using namespace std;

//  energy E = hf = hc/λ. Here h = 6.626*10-34 Js 

class Photon
{
    protected :
         double wavelength;

        public :

        Photon(double wavelength)
        {
            this->wavelength = wavelength/pow(10,-10);
        }

};

class Calculate_photonEnergy : public Photon
{
    private:
        double E;

    public :

        Calculate_photonEnergy(double value_in_angstrom) : Photon(value_in_angstrom)
        {

        }

        void calPhotonEnergy()
        {
            E = (6.626*(pow(10,-34))*3*(pow(10,8)))/wavelength;
            cout<<"Value of photon energy : "<<E<<endl;
        }
};
int main()
{
    Calculate_photonEnergy pt(0.5);
    pt.calPhotonEnergy();
    return 0;
}