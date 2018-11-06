#include <gtest/gtest.h>
#include "src/add.h"

using cpp_ci::add;

TEST(add, positive_numbers) {
    ASSERT_EQ(5, add(2, 3));
}
