
HFILES=./Cshift.h ./simd/Grid_avx.h ./simd/Grid_vector_types.h ./simd/Grid_sse4.h ./simd/Grid_avx512.h ./simd/Grid_empty.h ./simd/Grid_vector_unops.h ./simd/Grid_neon.h ./simd/Grid_qpx.h ./Tensors.h ./Algorithms.h ./communicator/Communicator_base.h ./lattice/Lattice_rng.h ./lattice/Lattice_reduction.h ./lattice/Lattice_transfer.h ./lattice/Lattice_unary.h ./lattice/Lattice_peekpoke.h ./lattice/Lattice_coordinate.h ./lattice/Lattice_comparison.h ./lattice/Lattice_overload.h ./lattice/Lattice_reality.h ./lattice/Lattice_local.h ./lattice/Lattice_conformable.h ./lattice/Lattice_where.h ./lattice/Lattice_comparison_utils.h ./lattice/Lattice_arith.h ./lattice/Lattice_base.h ./lattice/Lattice_ET.h ./lattice/Lattice_transpose.h ./lattice/Lattice_trace.h ./Stencil.h ./tensors/Tensor_arith_sub.h ./tensors/Tensor_exp.h ./tensors/Tensor_arith_mul.h ./tensors/Tensor_class.h ./tensors/Tensor_logical.h ./tensors/Tensor_transpose.h ./tensors/Tensor_arith_mac.h ./tensors/Tensor_arith_scalar.h ./tensors/Tensor_reality.h ./tensors/Tensor_trace.h ./tensors/Tensor_index.h ./tensors/Tensor_arith_add.h ./tensors/Tensor_outer.h ./tensors/Tensor_inner.h ./tensors/Tensor_traits.h ./tensors/Tensor_Ta.h ./tensors/Tensor_unary.h ./tensors/Tensor_determinant.h ./tensors/Tensor_arith.h ./tensors/Tensor_extract_merge.h ./Communicator.h ./Cartesian.h ./parallelIO/NerscIO.h ./qcd/QCD.h ./qcd/hmc/integrators/Integrator_base.h ./qcd/hmc/HMC.h ./qcd/utils/SpaceTimeGrid.h ./qcd/utils/SUn.h ./qcd/utils/LinalgUtils.h ./qcd/utils/CovariantCshift.h ./qcd/utils/WilsonLoops.h ./qcd/action/ActionBase.h ./qcd/action/gauge/WilsonGaugeAction.h ./qcd/action/Actions.h ./qcd/action/fermion/CayleyFermion5D.h ./qcd/action/fermion/ScaledShamirFermion.h ./qcd/action/fermion/MobiusFermion.h ./qcd/action/fermion/OverlapWilsonContfracTanhFermion.h ./qcd/action/fermion/PartialFractionFermion5D.h ./qcd/action/fermion/ShamirZolotarevFermion.h ./qcd/action/fermion/FermionOperator.h ./qcd/action/fermion/WilsonFermion5D.h ./qcd/action/fermion/WilsonCompressor.h ./qcd/action/fermion/OverlapWilsonPartialFractionZolotarevFermion.h ./qcd/action/fermion/WilsonKernels.h ./qcd/action/fermion/DomainWallFermion.h ./qcd/action/fermion/OverlapWilsonPartialFractionTanhFermion.h ./qcd/action/fermion/OverlapWilsonContfracZolotarevFermion.h ./qcd/action/fermion/MobiusZolotarevFermion.h ./qcd/action/fermion/g5HermitianLinop.h ./qcd/action/fermion/OverlapWilsonCayleyTanhFermion.h ./qcd/action/fermion/WilsonFermion.h ./qcd/action/fermion/ContinuedFractionFermion5D.h ./qcd/action/fermion/OverlapWilsonCayleyZolotarevFermion.h ./qcd/spin/TwoSpinor.h ./qcd/spin/Dirac.h ./cshift/Cshift_common.h ./cshift/Cshift_none.h ./cshift/Cshift_mpi.h ./Simd.h ./GridConfig.h ./cartesian/Cartesian_base.h ./cartesian/Cartesian_red_black.h ./cartesian/Cartesian_full.h ./AlignedAllocator.h ./Lattice.h ./Old/Tensor_poke.h ./Old/Tensor_peek.h ./Threads.h ./Grid.h ./algorithms/Preconditioner.h ./algorithms/iterative/ConjugateResidual.h ./algorithms/iterative/PrecGeneralisedConjugateResidual.h ./algorithms/iterative/ConjugateGradientMultiShift.h ./algorithms/iterative/SchurRedBlack.h ./algorithms/iterative/NormalEquations.h ./algorithms/iterative/ConjugateGradient.h ./algorithms/iterative/AdefGeneric.h ./algorithms/approx/Chebyshev.h ./algorithms/approx/Zolotarev.h ./algorithms/approx/MultiShiftFunction.h ./algorithms/approx/bigfloat.h ./algorithms/approx/bigfloat_double.h ./algorithms/approx/Remez.h ./algorithms/LinearOperator.h ./algorithms/SparseMatrix.h ./algorithms/CoarsenedMatrix.h ./stencil/Lebesgue.h

CCFILES=./qcd/hmc/integrators/Integrator_base.cc ./qcd/hmc/HMC.cc ./qcd/utils/SpaceTimeGrid.cc ./qcd/action/fermion/WilsonKernels.cc ./qcd/action/fermion/PartialFractionFermion5D.cc ./qcd/action/fermion/CayleyFermion5D.cc ./qcd/action/fermion/WilsonKernelsHand.cc ./qcd/action/fermion/WilsonFermion.cc ./qcd/action/fermion/ContinuedFractionFermion5D.cc ./qcd/action/fermion/WilsonFermion5D.cc ./qcd/spin/Dirac.cc ./GridInit.cc ./algorithms/approx/MultiShiftFunction.cc ./algorithms/approx/Remez.cc ./algorithms/approx/Zolotarev.cc ./stencil/Lebesgue.cc ./stencil/Stencil_common.cc