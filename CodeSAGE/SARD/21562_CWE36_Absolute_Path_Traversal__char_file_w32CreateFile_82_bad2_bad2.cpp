#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3.VAR4>
namespace VAR5
{
void VAR6::FUN1(char * VAR7)
{
 {
 HANDLE VAR8;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR8 = FUN2(VAR7,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
 {
 FUN3(VAR8);
 }
 }
}
}
#endif
