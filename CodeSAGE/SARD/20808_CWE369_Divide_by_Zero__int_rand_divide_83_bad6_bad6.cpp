#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR6 = FUN2();
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN3(100 / VAR6);
}
}
#endif
