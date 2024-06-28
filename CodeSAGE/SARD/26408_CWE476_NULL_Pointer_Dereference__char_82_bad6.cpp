#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR5[0]);
}
}
#endif
