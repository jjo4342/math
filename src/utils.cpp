// Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
// Authors: Juyeong Jang

#include "math/utils.hpp"

#include <stdexcept>
namespace programmers::math {
    auto Add(double lhs, double rhs)->double {
        return lhs + rhs;
    }
    auto Subtract(double lhs, double rhs)->double {
        return lhs - rhs;
    }
    auto Multiply(double lhs, double rhs)->double {
        return lhs * rhs;
    }
    auto Devide(double lhs, double rhs)->double {
        return lhs / rhs;
    }
    auto IsEqual(double lhs, double rhs)->bool {
        return (std::abs(lhs-rhs)<std::numeric_limits<double>::epsilon());
    }
}
