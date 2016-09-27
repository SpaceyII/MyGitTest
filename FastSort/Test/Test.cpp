#define BOOST_TEST_MODULE FastSort_Module

#include <boost/test/included/unit_test.hpp>
#include "FastSort/FastSort.h"

using namespace std;
class fastsort_fixture
{
public:
	fastsort_fixture()
	{
		BOOST_MESSAGE("Test Strated!");
	}
	~fastsort_fixture()
	{
		BOOST_MESSAGE("Test Ended!");
	}
};

BOOST_FIXTURE_TEST_SUITE(fs1, fastsort_fixture)

BOOST_AUTO_TEST_CASE(fastsort_test)
{
	int arr[5] = { 1, 5, 7, 9, 6 };
	FS::FastSort(arr, 0, 4);
	BOOST_REQUIRE(9 == arr[0]);
	BOOST_REQUIRE(6 == arr[2]);
}

BOOST_AUTO_TEST_SUITE_END()
