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
    BOOST_CHECK( student.getPESEL() == "99992222000" );
}
BOOST_AUTO_TEST_CASE( testSetAndGetPESEL2 )
{
    Student student;
    student.setPESEL( "00000000000" );
    BOOST_CHECK( student.getPESEL() == "00000000000" );
}
BOOST_AUTO_TEST_CASE( testSetAndGetPESEL3 )
{
    Student student;
    std::string pesel = "01234567890";
    student.setPESEL( pesel );
    BOOST_CHECK( student.getPESEL() == "01234567890" );
}

BOOST_AUTO_TEST_CASE( testSetAndGetName1 )
{
    Student student;
    std::string name = "John";
    student.setName( name );
    BOOST_CHECK( student.getName() == "John" );
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
    std::string name = "Johanson";
    student.setName( name );
    BOOST_CHECK( student.getName() == "Johanson" );
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
    BOOST_CHECK( student.getPESEL() == "09876543211" && student.getName() == "Andrew"
        && student.getSurname() == "Dude" && student.getIQ() == 123 );
}
BOOST_AUTO_TEST_CASE( testSetStudent2 )
{
    Student student;
    student.set_student( "56294643921", "Martin", "Smith", 45 );
    BOOST_CHECK( student.getPESEL() == "56294643921" && student.getName() == "Martin"
        && student.getSurname() == "Smith" && student.getIQ() == 45 );
}

BOOST_AUTO_TEST_SUITE_END()