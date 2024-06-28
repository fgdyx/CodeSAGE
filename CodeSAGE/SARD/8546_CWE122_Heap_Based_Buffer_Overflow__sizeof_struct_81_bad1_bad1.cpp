#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(VAR5 * VAR6) const
{
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(VAR6);
 free(VAR6);
}
}
#endif
