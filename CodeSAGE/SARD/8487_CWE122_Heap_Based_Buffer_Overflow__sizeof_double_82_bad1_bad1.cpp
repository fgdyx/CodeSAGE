#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(double * VAR5)
{
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR5);
 free(VAR5);
}
}
#endif
