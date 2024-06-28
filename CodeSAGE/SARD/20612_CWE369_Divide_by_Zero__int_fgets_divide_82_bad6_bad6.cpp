#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5)
{
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 / VAR5);
}
}
#endif
