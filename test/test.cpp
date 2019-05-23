#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Student_Tests

#include <boost/test/unit_test.hpp>
#include <string>

#include "../include/Student.hpp"
#include "../include/Human.hpp"

#include "../src/Student.cpp"
#include "../src/Human.cpp"

BOOST_AUTO_TEST_SUITE( HumanFeatures )

BOOST_AUTO_TEST_CASE( testSetAndGetPESEL1 )
{
    Student student;
    std::string pesel = "99992222000";
    student.setPESEL( pesel );
    BOOST_CHECK( student.getPESEL() == pesel );
}
BOOST_AUTO_TEST_CASE( testSetAndGetPESEL2 )
{
    Student student;
    student.setPESEL( "00000000000" );
    BOOST_CHECK( student.getPESEL() == "00000000000" );
}

BOOST_AUTO_TEST_CASE( testSetAndGetName1 )
{
    Student student;
    std::string name = "John";
    student.setName( name );
    BOOST_CHECK( student.getName() == name );
}
BOOST_AUTO_TEST_CASE( testSetAndGetName2 )
{
    Student student;
    student.setName( "Aleksandra" );
    BOOST_CHECK( student.getName() == "Aleksandra" );
}

BOOST_AUTO_TEST_CASE( testSetAndGetSurname1 )
{
    Student student;
    std::string surname = "Johanson";
    student.setName( surname );
    BOOST_CHECK( student.getName() == surname );
}
BOOST_AUTO_TEST_CASE( testSetAndGetSurname2 )
{
    Student student;
    student.setName( "Featherstonehaugh" );
    BOOST_CHECK( student.getName() == "Featherstonehaugh" );
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( studentFeature )

BOOST_AUTO_TEST_CASE( testSetStudent1 )
{
    Student student;
    student.set_student( "09876543211", "Andrew", "Dude", 123 );
    BOOST_CHECK( student.getPESEL() == "09876543211" );
    BOOST_CHECK( student.getName() == "Andrew" );
    BOOST_CHECK( student.getSurname() == "Dude" );
    BOOST_CHECK( student.getIQ() == 123 );
}
BOOST_AUTO_TEST_CASE( testSetStudent2 )
{
    Student student;
    student.set_student( "56294643921", "Martin", "Smith", 45 );
    BOOST_CHECK( student.getPESEL() == "56294643921" );
    BOOST_CHECK( student.getName() == "Martin" );
    BOOST_CHECK( student.getSurname() == "Smith" );
    BOOST_CHECK( student.getIQ() == 45 );
}

BOOST_AUTO_TEST_CASE( testIncreaseIQ1 )
{
    Student student;
    student.set_student( "09876543211", "Andrew", "Dude", 123 );
    BOOST_CHECK_EQUAL( student.getIQ(), 123 );
    ++student;
    BOOST_CHECK_EQUAL( student.getIQ(), 124 );
}
BOOST_AUTO_TEST_CASE( testIncreaseIQ2 )
{
    Student student;
    student.set_student( "56294643921", "Martin", "Smith", 45 );
    BOOST_CHECK_EQUAL( student.getIQ(), 45 );
    ++student;
    ++student;
    ++student;
    ++student;
    ++student;
    BOOST_CHECK_EQUAL( student.getIQ(), 50 );
}
BOOST_AUTO_TEST_CASE( testIncreaseIQ3 )
{
    Student student;
    student.set_student( "09876543211", "Andrew", "Dude", 123 );
    BOOST_CHECK_EQUAL( student.getIQ(), 123 );
    for ( int i = 0; i < 783; ++i )
    {
        ++student;
    }
    BOOST_CHECK( student.getIQ() == 906 );
}

BOOST_AUTO_TEST_SUITE_END()