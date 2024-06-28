#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5)
{
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR6 = VAR5 - 1;
 FUN2(VAR6);
 }
}
}
#endif
