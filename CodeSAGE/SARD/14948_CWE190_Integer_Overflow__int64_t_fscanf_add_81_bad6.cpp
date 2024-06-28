#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int64_t VAR5) const
{
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR6 = VAR5 + 1;
 FUN2(VAR6);
 }
}
}
#endif
