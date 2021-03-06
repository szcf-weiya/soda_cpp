#include <iostream>
#include <gsl/gsl_matrix>
#include <gsl/gsl_vector>

#define min(x, y) {x < y ? x : y}

using namespace std;

double calc_BIC(gsl_matrix* xx, size_t nrow_x, size_t ncol_x,
		gsl_vector* yy, size_t ncol_y)

void soda(gsl_matrix* xx, size_t nrow_x, size_t ncol_x,
	  gsl_vector* yy, size_t nrow_y,
	  bool norm, bool debug, int gam, int minF, bool main_effects_only)
{
  double K = gsl_vector_max(yy);
  int K, D;
  K = nrow_x;
  D = ncol_x;
  minF = min(D, minF);

  if (norm)
    {
      cout << "norm: todo" << endl;
    }
  
}

int main()
{
  cout << "done!" << endl;
  return 0;
}
