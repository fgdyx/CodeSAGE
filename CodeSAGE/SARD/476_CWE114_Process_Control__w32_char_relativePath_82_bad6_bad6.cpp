#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3.VAR4>
namespace VAR5
{
void VAR6::FUN1(char * VAR7)
{
 {
 HMODULE VAR8;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR8 = LoadLibraryA(VAR7);
 if (VAR8 != NULL)
 {
 FUN2(VAR8);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
}
#endif
