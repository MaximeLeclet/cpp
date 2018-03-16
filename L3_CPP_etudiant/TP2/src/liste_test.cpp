#include <CppUTest/CommandLineTestRunner.h>

#include "liste.hpp"

TEST_GROUP(GroupListe) { };

TEST(GroupListe, test1) 
{
  Liste liste;
  liste.ajouterDevant(1);
  liste.ajouterDevant(2);
  CHECK_EQUAL(liste.getTaille(), 2);
}
