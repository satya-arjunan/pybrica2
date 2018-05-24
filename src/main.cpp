#include <pybind11/pybind11.h>
#include "brica2/core/unit.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pybrica2, m) {
    py::class_<brica2::core::Unit>(m, "Unit")
        .def(py::init())
        .def(py::init<brica2::core::Unit&>())
        .def("make_in_port", (void (brica2::core::Unit::*)(const std::string&))&brica2::core::Unit::make_in_port)
        .def("make_out_port", (void (brica2::core::Unit::*)(const std::string&))&brica2::core::Unit::make_out_port);
}

//PYBIND11_MODULE(pybrica2, m) {
//    py::class_<brica2::core::Component>(m, "Component")
//        .def(py::init<const double>(), py::init<const double>())
//        .def("make_in_port", (void (brica2::core::Component::*)(const std::string&))&brica2::core::Component::make_in_port)
//        .def("make_out_port", (void (brica2::core::Component::*)(const std::string&))&brica2::core::Component::make_out_port);
//}

