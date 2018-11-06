#include <gtest/gtest.h>
#include "src/add.h"

using cpp_ci::add;

TEST(add, positive_numbers) {
    ASSERT_EQ(4, add(2, 3));
}
