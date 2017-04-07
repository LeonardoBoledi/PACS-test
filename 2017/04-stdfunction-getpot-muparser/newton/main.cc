#include <iostream>
#include <functional>
#include "newton.h"
#include "GetPot"

int main (int argc, char *argv[])
{
  GetPot commandLine(argc, argv);
  const double start_point = commandLine ("start_point", 2.);
  //const double start_point = 2.;
  auto func = [] (double x) -> double {return x*x*x + 5*x + 3;};
  auto derivative = [] (double x) -> double {return 3*x*x + 5;};
  newton_solver newton(func, derivative);
  newton.solve(start_point);
  std::cout << "The solution is: " << newton.get_result() << std::endl;
  std::cout << "Number of iterations: " << newton.get_iterations() << std::endl;
}
