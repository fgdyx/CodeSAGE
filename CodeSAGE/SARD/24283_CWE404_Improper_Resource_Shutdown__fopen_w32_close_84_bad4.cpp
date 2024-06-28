#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR7 = fopen("", "");
}
VAR4::~FUN1()
{
 if (VAR7 != NULL)
 {
 /* FLAW: Attempt to close the file using close() instead of fclose() */
 FUN2((int)VAR7);
 }
}
}
#endif
