#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 HMODULE VAR3;
 VAR3 = LoadLibraryA(VAR2);
 if (VAR3 != NULL)
 {
 FUN2(VAR3);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
