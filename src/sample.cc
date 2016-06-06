#include <boost/python.hpp>

namespace bp = boost::python;

class Test {
 public:
  int GetStuff(int a) { return a + 1; }
};

BOOST_PYTHON_MODULE(test) {
  bp::class_<Test>("Test")
      .def("get_stuff", &Test::GetStuff)
      ;
}

int main(int argc, char** argv) {
  return 0;
}
