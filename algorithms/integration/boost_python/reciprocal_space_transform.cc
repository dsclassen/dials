
#include <boost/python.hpp>
#include <boost/python/def.hpp>
#include <dials/algorithms/integration/reciprocal_space_transform.h>

namespace dials { namespace algorithms { namespace boost_python {

  using namespace boost::python;

  void export_reciprocal_space_transform() 
  {
    class_<ReciprocalSpaceTransformE3Fraction>(
        "ReciprocalSpaceTransformE3Fraction", no_init)
      .def(init<const Scan&, double, double, int>((
        arg("scan"),
        arg("mosaicity"),
        arg("n_sigma"),
        arg("grid_size_e3"))))
      .def("__call__",
        &ReciprocalSpaceTransformE3Fraction::operator(), (
          arg("roi_z"),
          arg("phi"),
          arg("zeta")));
  
    class_<ReciprocalSpaceTransformDetectorLabCoords>(
        "ReciprocalSpaceTransformDetectorLabCoords")
      .def("__call__",
        &ReciprocalSpaceTransformDetectorLabCoords::operator(), (
          arg("detector"),
          arg("scan"),
          arg("n_div")));
  
//    void (XdsTransform::*calculate_single)(int, int, scitbx::af::tiny <int, 6>,
//        scitbx::vec3 <double>, double) = &XdsTransform::calculate;

////    void (XdsTransform::*calculate_array)(const af::flex_tiny6_int &,
////        const af::flex_vec3_double &, const scitbx::af::flex_double &) = 
////            &XdsTransform::calculate;

//    void (XdsTransform::*calculate_single_reflection)(int, Reflection &) = 
//        &XdsTransform::calculate;

//    void (XdsTransform::*calculate_array_reflection)(ReflectionList &) = 
//        &XdsTransform::calculate;

//    class_ <XdsTransform> ("XdsTransform")
//      .def(init <XdsTransformGrid &,
//           const scitbx::af::flex_int &,
//           const scitbx::af::flex_int &,
//           const equipment::Detector&,
//           const equipment::Beam&,
//           const equipment::Goniometer&,
//           int > ((
//        arg("xds_grid"),
//        arg("image"),
//        arg("mask"),
//        arg("detector"),
//        arg("beam"),
//        arg("goniometer"),
//        arg("n_div") = 5)))
//      .def("calculate", calculate_single, (
//        arg("reflection_index"),
//        arg("mask_index"),
//        arg("roi"),
//        arg("s1"),
//        arg("phi")))
////    .def("calculate", calculate_array, (
////                arg("roi"),
////                arg("s1"),
////                arg("phi")))
//      .def("calculate", calculate_single_reflection, (
//        arg("reflection_index"),
//        arg("reflection")))
//      .def("calculate", calculate_array_reflection, (
//        arg("reflections")));
  }

}}} // namespace = dials::integration::boost_python
