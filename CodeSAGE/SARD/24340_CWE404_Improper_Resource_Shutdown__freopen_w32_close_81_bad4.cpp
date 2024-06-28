#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(VAR5 * VAR6) const
{
 if (VAR6 != NULL)
 {
 /* FLAW: Attempt to close the file using close() instead of fclose() */
 FUN2((int)VAR6);
 }
}
}
#endif
