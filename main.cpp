#include <iostream>
#include <gtest/gtest.h>

std::string DemoTest()
{
  return "hello";
}

TEST(SimpleTest, Test1)
{
  ASSERT_EQ(DemoTest(), std::string("hello"));
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}