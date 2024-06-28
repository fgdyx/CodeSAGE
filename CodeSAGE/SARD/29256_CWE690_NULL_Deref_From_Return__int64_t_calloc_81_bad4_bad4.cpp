#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(VAR5 * VAR6) const
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR6[0] = 5LL;
 FUN2(VAR6[0]);
 free(VAR6);
}
}
#endif
