#include <iostream>
#define PI 3.141572

double calculateCircleArea_przezWartosc(double r)
{
    return PI * r * r;
}

void calculateCircleArea_przezReferencje(double r, double& area)
{
    area = PI * r * r;
}

void calculateCircleArea_przezWskaznik(double r, double* area)
{
    *area = PI * r * r;
}

void calculateCircleAreas(double Rs[], size_t len, double*& areas)
{
    areas = new double[len];
    for(int i = 0; i < len; i++)
    {
        areas[i] = PI * Rs[i] * Rs[i];
    }
}


int main()
{
    double r = 1.0;
    double result = calculateCircleArea_przezWartosc(r);
    std::cout << "Przekazano do funkcji wartość r = " << r <<" , otrzymano wynik (przez wartość): " << result << "\n";
    std::cout << "\n";
    r += 1;
    calculateCircleArea_przezReferencje(r, result);
    std::cout << "Przekazano do funkcji wartość r = " << r <<" , otrzymano wynik (przez referęcje): " << result << "\n";
    std::cout << "\n";

    r += 1;
    calculateCircleArea_przezWskaznik(r, &result);
    std::cout << "Przekazano do funkcji wartość r = " << r <<" , otrzymano wynik (przez wskaźniek): " << result << "\n";
    std::cout << "\n";

    double Rs[5] = {1,2,3,4,5};
    size_t len = sizeof(Rs) / sizeof(Rs[0]);
    double* results;
    std::cout << "\n";

    calculateCircleAreas(Rs, len, results);
    for(int i = 0; i < len; i++)
    {
        std::cout << "Przekazano do funkcji wartość R[" << i << "] = " << Rs[i] <<" , otrzymano wynik (przez wskaźnik na tablicę): " << results[i] << "\n";
    }
    std::cout << std::endl;

}