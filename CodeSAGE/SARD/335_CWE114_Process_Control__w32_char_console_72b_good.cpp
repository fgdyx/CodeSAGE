#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryA(VAR4);
 if (VAR5 != NULL)
 {
 FUN2(VAR5);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
