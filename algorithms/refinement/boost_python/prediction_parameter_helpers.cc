
#include <boost/python.hpp>
#include <boost/python/def.hpp>
#include <scitbx/array_family/boost_python/flex_wrapper.h>
#include "../prediction_parameter_helpers.h"

using namespace boost::python;

namespace dials { namespace refinement { namespace boost_python {

  void export_prediction_parameter_helpers()
  {
    vec3 <double> (*detector_pv_derivative_single)(
      mat3 <double>, mat3 <double>, vec3 <double>) =
        &detector_pv_derivative;

    af::shared< vec3<double> > (*detector_pv_derivative_array)(
      mat3 <double>, const af::const_ref< mat3<double> >&, vec3 <double>) =
        &detector_pv_derivative;

    double (*beam_phi_derivative_single)(
      vec3 <double>, vec3 <double>, double) =
        &beam_phi_derivative;

    af::shared<double> (*beam_phi_derivative_array)(
      vec3 <double>, const af::const_ref< vec3<double> >&, double) =
        &beam_phi_derivative;

    vec3 <double> (*beam_pv_derivative_single)(
      mat3 <double>, vec3 <double>, double, vec3 <double>) =
        &beam_pv_derivative;

    af::shared< vec3<double> > (*beam_pv_derivative_array)(
      mat3 <double>, vec3 <double>, const af::const_ref<double>&,
      const af::const_ref< vec3<double> >&) =  &beam_pv_derivative;

    vec3 <double> (*crystal_orientation_r_derivative_single)(
      mat3 <double>, mat3 <double>, mat3 <double>, miller_index) =
        &crystal_orientation_r_derivative;

    af::shared< vec3<double> > (*crystal_orientation_r_derivative_array)(
      mat3 <double>, const af::const_ref< mat3<double> >&, mat3 <double>,
      miller_index) = &crystal_orientation_r_derivative;

    double (*crystal_orientation_phi_derivative_single)(
      vec3 <double>, vec3 <double>, double) =
        &crystal_orientation_phi_derivative;

    af::shared<double> (*crystal_orientation_phi_derivative_array)(
      const af::const_ref< vec3<double> >&, vec3 <double>, double) =
        &crystal_orientation_phi_derivative;

    vec3 <double> (*crystal_orientation_pv_derivative_single)(
      mat3 <double>, vec3 <double>, vec3 <double>, double) =
        &crystal_orientation_pv_derivative;

    af::shared< vec3<double> > (*crystal_orientation_pv_derivative_array)(
      mat3 <double>, const af::const_ref< vec3<double> >&, vec3 <double>,
      const af::const_ref<double>&) = &crystal_orientation_pv_derivative;

    vec3 <double> (*crystal_cell_r_derivative_single)(
      mat3 <double>, mat3 <double>, mat3 <double>, miller_index) =
        &crystal_cell_r_derivative;

    af::shared< vec3<double> > (*crystal_cell_r_derivative_array)(mat3 <double>,
      mat3 <double>, const af::const_ref< mat3<double> >&, miller_index) =
        &crystal_cell_r_derivative;

    double (*crystal_cell_phi_derivative_single)(
      vec3 <double>, vec3 <double>, double) =
        &crystal_cell_phi_derivative;

    af::shared<double> (*crystal_cell_phi_derivative_array)(
      const af::const_ref< vec3<double> >&, vec3 <double>, double) =
        &crystal_cell_phi_derivative;

    vec3 <double> (*crystal_cell_pv_derivative_single)(
      mat3 <double>, vec3 <double>, vec3 <double>, double) =
        &crystal_cell_pv_derivative;

    af::shared< vec3<double> > (*crystal_cell_pv_derivative_array)(
      mat3 <double>, const af::const_ref< vec3<double> >&, vec3 <double>,
      const af::const_ref<double>&) = &crystal_cell_pv_derivative;

    def("detector_pv_derivative",
      detector_pv_derivative_single);
    def("detector_pv_derivative",
      detector_pv_derivative_array);
    def("beam_phi_derivative",
      beam_phi_derivative_single);
    def("beam_phi_derivative",
      beam_phi_derivative_array);
    def("beam_pv_derivative",
      beam_pv_derivative_single);
    def("beam_pv_derivative",
      beam_pv_derivative_array);
    def("crystal_orientation_r_derivative",
      crystal_orientation_r_derivative_single);
    def("crystal_orientation_r_derivative",
      crystal_orientation_r_derivative_array);
    def("crystal_orientation_phi_derivative",
      crystal_orientation_phi_derivative_single);
    def("crystal_orientation_phi_derivative",
      crystal_orientation_phi_derivative_array);
    def("crystal_orientation_pv_derivative",
      crystal_orientation_pv_derivative_single);
    def("crystal_orientation_pv_derivative",
      crystal_orientation_pv_derivative_array);
    def("crystal_cell_r_derivative",
      crystal_cell_r_derivative_single);
    def("crystal_cell_r_derivative",
      crystal_cell_r_derivative_array);
    def("crystal_cell_phi_derivative",
      crystal_cell_phi_derivative_single);
    def("crystal_cell_phi_derivative",
      crystal_cell_phi_derivative_array);
    def("crystal_cell_pv_derivative",
      crystal_cell_pv_derivative_single);
    def("crystal_cell_pv_derivative",
      crystal_cell_pv_derivative_array);
  }

}}} // namespace dials::refinement::boost_python
