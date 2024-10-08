#include <iostream>
#include <span>
#include <array>
#include <cassert>
#include <cstddef>
void product(std::span<int> inputOutput, std::span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size());
    int s = 0;
    /* for (int i = 0; i < inputOutput.size(); i++) {

              int el = inputOutput[i];
              int e = coefficients[i];

              inputOutput[i] = el * e;
             s = el * e;
              std::cout << "inputOutput[" << i << "] = " << el << ", coefficients["<<i<<  "] = " << e
              << ", summa: " << s << std::endl;
     }  */
     /* int p = 0;
      while (p < inputOutput.size()) {
          int el = inputOutput[p];
          int e = coefficients[p];
          inputOutput[p] = el * e;
          s = el * e;
          std::cout << "inputOutput[" << p << "] = " << el << ", coefficients[" << p << "] = " << e
              << ", summa: " << s << std::endl;
          p++;
  }*/
    while (true) {

        for (int i = 0; i < inputOutput.size(); i++) {
            int el = inputOutput[i];
            int e = coefficients[i];
            inputOutput[i] = el * e;
            s = el * e;
            std::cout << "inputOutput[" << i << "] = " << el << ", coefficients[" << i << "] = " << e
                << ", summa: " << s << std::endl;
        }
        break;

    }
}
int main()
{
    std::array a{ 2, 6, 7, 7,9 };
    std::array b{ 6, 9,1 , 4 ,6 };
    product(a, b);
    std::cout << "massiv inputoutput" << std::endl;
    for (int i : a) {
        std::cout << i << std::endl;
    }


}
