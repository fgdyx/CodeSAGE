#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR6 = FUN2("", VAR7|VAR8, VAR9|VAR10);
}
VAR4::~FUN1()
{
 if (VAR6 != -1)
 {
 /* FLAW: Attempt to close the file using fclose() instead of close() */
 fclose((VAR11 *)VAR6);
 }
}
}
#endif
