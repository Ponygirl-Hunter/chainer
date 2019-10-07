#pragma once

#include "chainerx/array.h"
#include "chainerx/scalar.h"

namespace chainerx {

Array AbsoluteError(const Array& x1, const Array& x2);

Array SquaredError(const Array& x1, const Array& x2);

Array GaussianKLDivergence(const Array& mean, const Array& ln_var);

Array HuberLoss(const Array& x1, const Array& x2, Scalar delta);

Array SigmoidCrossEntropy(const Array& x1, const Array& x2);

enum class SoftmaxCrossEntropyReduceMode {
    kMean = 1,
    kNo,
};

Array SoftmaxCrossEntropy(
        const Array& x1,
        const Array& x2,
        SoftmaxCrossEntropyReduceMode reduce_mode = SoftmaxCrossEntropyReduceMode::kMean);

Array Hinge(const Array& x, const Array& t, double norm = 1.0);

}  // namespace chainerx
