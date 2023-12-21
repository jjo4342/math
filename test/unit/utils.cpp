// Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
// Authors: Juyeong Jang

#include <limits>
#include <cmath>
#include <stdexcept>

#include "math/utils.hpp"

#include "gtest/gtest.h"

namespace programmers::math {
  TEST(MathUtils, Add){
    EXPECT_EQ(Add(-1.0, 1.0), 0.0);
    EXPECT_EQ(Add(32.352452001, 52.2342356), 84.586687601);
    EXPECT_EQ(Add(100000000000000000, 22222222222222222), 122222222222222222);
    
    EXPECT_NE(Add(0.0, 0.0), 1.0);
    EXPECT_NE(Add(-1.0, 0.0), 1.0);

    EXPECT_THROW(Add(0.0,std::nan("")), std::invalid_argument);
    EXPECT_THROW(Add(std::nan(""),std::nan("")), std::invalid_argument);
    EXPECT_THROW(Add(std::numeric_limits<double>::infinity(),0.0), std::invalid_argument);
    EXPECT_THROW(Add(std::numeric_limits<double>::infinity(),std::nan("")), std::invalid_argument);
  }
  TEST(MathUtils, Subtract){
    EXPECT_EQ(Subtract(-1.0, 1.0), -2.0);
    EXPECT_EQ(Subtract(32.352452, 52.234235), -19.881783);
    EXPECT_EQ(Subtract(10000, 2222), 7778);
    
    EXPECT_NE(Subtract(0.0, 0.0), 1.0);
    EXPECT_NE(Subtract(-1.0, 0.0), 0.0);

    EXPECT_THROW(Subtract(0.0,std::nan("")), std::invalid_argument);
    EXPECT_THROW(Subtract(std::nan(""),std::nan("")), std::invalid_argument);
    EXPECT_THROW(Subtract(std::numeric_limits<double>::infinity(),0.0), std::invalid_argument);
    EXPECT_THROW(Subtract(std::numeric_limits<double>::infinity(),std::nan("")), std::invalid_argument);
  }
  TEST(MathUtils, Multiply){
    EXPECT_EQ(Multiply(-1.0, 1.0), -1.0);
    EXPECT_EQ(Multiply(-1.0, -1.0), 1.0);
    EXPECT_EQ(Multiply(-1.0, 0.0), 0.0);
    EXPECT_EQ(Multiply(0.35, 0.954), 0.3339);
    EXPECT_EQ(Multiply(10000, 2222), 22220000);
    
    EXPECT_NE(Multiply(-1.0, 0.0), -1.0);
    EXPECT_NE(Multiply(-1.0, -1.0), -1.0);

    EXPECT_THROW(Multiply(0.0,std::nan("")), std::invalid_argument);
    EXPECT_THROW(Multiply(std::nan(""),std::nan("")), std::invalid_argument);
    EXPECT_THROW(Multiply(std::numeric_limits<double>::infinity(),0.0), std::invalid_argument);
    EXPECT_THROW(Multiply(std::numeric_limits<double>::infinity(),std::nan("")), std::invalid_argument);
  }
  TEST(MathUtils, Devide){
    EXPECT_EQ(Devide(-1.0, 1.0), -1.0);
    EXPECT_EQ(Devide(-1.0, -1.0), 1.0);
    EXPECT_EQ(Devide(105, 0.6), 175);
    EXPECT_EQ(Devide(22222, 100000), 0.22222);
    EXPECT_EQ(Devide(1.0, 0.0), std::numeric_limits<double>::infinity());

    EXPECT_NE(Devide(-1.0, 0.0), -1.0);
    EXPECT_NE(Devide(-1.0, -1.0), -1.0);

    EXPECT_THROW(Devide(0.0,std::nan("")), std::invalid_argument);
    EXPECT_THROW(Devide(std::nan(""),std::nan("")), std::invalid_argument);
    EXPECT_THROW(Devide(std::numeric_limits<double>::infinity(),0.0), std::invalid_argument);
    EXPECT_THROW(Devide(std::numeric_limits<double>::infinity(),std::nan("")), std::invalid_argument);
  }
  TEST(MathUtils, IsEqual){
    EXPECT_EQ(IsEqual(-1.0, 1.0), false);
    EXPECT_EQ(IsEqual(0.0, 0.0), true);
    EXPECT_EQ(IsEqual(-(-10), 10), true);
    
    EXPECT_NE(IsEqual(0.0, -0.0), false);
    EXPECT_NE(IsEqual(0.999999, 1), true);

    EXPECT_THROW(IsEqual(0.0,std::nan("")), std::invalid_argument);
    EXPECT_THROW(IsEqual(std::nan(""),std::nan("")), std::invalid_argument);
    EXPECT_THROW(IsEqual(std::numeric_limits<double>::infinity(),0.0), std::invalid_argument);
    EXPECT_THROW(IsEqual(std::numeric_limits<double>::infinity(),std::nan("")), std::invalid_argument);
  }
}