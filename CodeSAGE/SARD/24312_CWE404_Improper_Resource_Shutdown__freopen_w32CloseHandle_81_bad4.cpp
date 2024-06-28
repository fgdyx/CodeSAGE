#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3.VAR4>
namespace VAR5
{
void VAR6::FUN1(VAR7 * VAR8) const
{
 if (VAR8 != NULL)
 {
 /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
 FUN2((VAR9)VAR8);
 }
}
}
#endif
