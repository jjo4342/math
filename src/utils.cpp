// Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
// Authors: Juyeong Jang

#include "math/utils.hpp"

#include <cmath>
#include <limits>
#include <stdexcept>
namespace programmers::math {
    auto Add(double lhs, double rhs)->double {
        if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)){
            throw std::invalid_argument("rhs or lhs is nan or inf");
        }
        return lhs + rhs;
    }
    auto Subtract(double lhs, double rhs)->double {
        if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)){
            throw std::invalid_argument("rhs or lhs is nan or inf");
        }
        return lhs - rhs;
    }
    auto Multiply(double lhs, double rhs)->double {
        if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)){
            throw std::invalid_argument("rhs or lhs is nan or inf");
        }
        return lhs * rhs;
    }
    auto Devide(double lhs, double rhs)->double {
        if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)){
            throw std::invalid_argument("rhs or lhs is nan or inf");
        }
        return lhs / rhs;
    }
    auto IsEqual(double lhs, double rhs)->bool {
        if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs)){
            throw std::invalid_argument("rhs or lhs is nan or inf");
        }
        return (std::abs(lhs-rhs)<std::numeric_limits<double>::epsilon());
    }
}
