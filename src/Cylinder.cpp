# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <bits/stdc++.h>
# define pi 3.1415926535897932384626433
double Cylinder :: SurfaceArea(){
    
    return (pi*radius*2*(radius+height));
}

double Cylinder :: Volume(){

    return (pi*radius*radius*height);
}

double Cylinder :: Circumference(){

    return (pi*2*radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << std::setprecision(3) << "Circumference: " << cldr.Circumference() <<  "\n";
    out << fixed << std::setprecision(3) << "SurfaceArea: " << cldr.SurfaceArea() <<  "\n";
    out << fixed << std::setprecision(3) << "Volume: " << cldr.Volume() <<  "\n";
    return out;
}

# endif
