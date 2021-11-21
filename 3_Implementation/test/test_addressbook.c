#include "unity.h"
#include "addressbook.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_addrecords(void)
{
    char name = "vishwa", address = "hutti";
    TEST_ASSERT_EQUAL("hutti", addrecords(name, address));
}
void test_modifyrecods(void)
{
    char name = "vincent", address = "belgavi";
    TEST_ASSERT_EQUAL("hutti", modifyrecords(name, address));
}
void test_deleterecords(void)
{
    char name = "vishwa", address = "hutti";
    TEST_ASSERT_EQUAL("hutti", test_deleterecords(name, address));
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