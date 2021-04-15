#include "unity.h"
#include "logicgates.h"

void setUp(){}

void tearDown(){}

void test_and(void);
void test_or(void);
void test_not(void);
void test_nand(void);
void test_nor(void);
void test_xor(void);

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_and);
    RUN_TEST(test_or);
    RUN_TEST(test_not);
    RUN_TEST(test_nand);
    RUN_TEST(test_nor);
    RUN_TEST(test_xor);
    return UNITY_END();
}

void test_and(void){
       TEST_ASSERT_EQUAL(0,AND(1,2));
       TEST_ASSERT_EQUAL(3,AND(3,3));
}

void test_or(void){
    TEST_ASSERT_EQUAL(3,OR(1,2));
    TEST_ASSERT_EQUAL(5,OR(1,5));
}
void test_not(void){
    TEST_ASSERT_EQUAL(0,NOT(1));
    TEST_ASSERT_EQUAL(1,NOT(0));
}

void test_xor(void);
{
    TEST_ASSERT_EQUAL(3,AND(1,2));
    TEST_ASSERT_EQUAL(0,AND(3,3));
}