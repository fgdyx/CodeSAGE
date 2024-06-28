#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(VAR5 * VAR6)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR6->VAR7);
 delete VAR6;
}
}
#endif
