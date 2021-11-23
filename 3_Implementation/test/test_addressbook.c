#include "unity.h"
#include "address_book.h"

void setUp()
{
}

void tearDown()
{
}

void test_addrecords(void)
{
    char name = "vishwa", PHONE_NUMBER_COUNT = "9481835555";
    TEST_ASSERT_EQUAL("hutti", addrecords(name, PHONE_NUMBER_COUNT));
}
void test_modifyrecods(void)
{
    char name = "vincent", PHONE_NUMBER_COUNT = "9292929222";
    TEST_ASSERT_EQUAL("hutti", modifyrecords(name, PHONE_NUMBER_COUNT));
}
void test_deleterecords(void)
{
    char name = "vishwa", PHONE_NUMBER_COUNT = "9292929292";
    TEST_ASSERT_EQUAL("hutti", test_deleterecords(name, PHONE_NUMBER_COUNT));
}


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(test_addrecords);
    RUN_TEST(test_modifyrecods);
    RUN_TEST(test_deleterecords);
    /* Close the Unity Test Framework */
    return UNITY_END();
}