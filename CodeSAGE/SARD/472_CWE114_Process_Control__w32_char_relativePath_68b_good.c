#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 HMODULE VAR4;
 VAR4 = LoadLibraryA(VAR2);
 if (VAR4 != NULL)
 {
 FUN2(VAR4);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
