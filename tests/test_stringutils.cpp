#include "stringutils.h"
#include <gtest/gtest.h>

TEST(ToUpper, Basic) { EXPECT_EQ(stringutils::to_upper("hello"), "HELLO"); }
TEST(ToUpper, Mixed) { EXPECT_EQ(stringutils::to_upper("HeLLo"), "HELLO"); }
TEST(ToLower, Basic) { EXPECT_EQ(stringutils::to_lower("HELLO"), "hello"); }
TEST(Trim, Spaces) { EXPECT_EQ(stringutils::trim("  hi  "), "hi"); }
TEST(Trim, Tabs) { EXPECT_EQ(stringutils::trim("\thi\t"), "hi"); }
TEST(Trim, Empty) { EXPECT_EQ(stringutils::trim("   "), ""); }
TEST(StartsWith, True) { EXPECT_TRUE(stringutils::starts_with("hello world", "hello")); }
TEST(StartsWith, False) { EXPECT_FALSE(stringutils::starts_with("hello", "world")); }
TEST(EndsWith, True) { EXPECT_TRUE(stringutils::ends_with("hello world", "world")); }
TEST(EndsWith, False) { EXPECT_FALSE(stringutils::ends_with("hello", "world")); }
TEST(Reverse, Basic) { EXPECT_EQ(stringutils::reverse("hello"), "olleh"); }
TEST(Reverse, Empty) { EXPECT_EQ(stringutils::reverse(""), ""); }
TEST(CountChar, Multiple) { EXPECT_EQ(stringutils::count_char("hello", 'l'), 2); }
TEST(CountChar, None) { EXPECT_EQ(stringutils::count_char("hello", 'z'), 0); }