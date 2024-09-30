#include <nanobind/nanobind.h>

namespace nb = nanobind;
using namespace nb::literals;

enum class Color { Red };

NB_MODULE(_testcoco, m) {
    nb::enum_<Color>(m, "Color")
        .value("Red", Color::Red);
}
