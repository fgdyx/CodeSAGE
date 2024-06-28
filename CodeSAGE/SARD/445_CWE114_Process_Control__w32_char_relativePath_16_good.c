#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 while(1)
 {
 strcpy(VAR2, "");
 break;
 }
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
void FUN4()
{
 FUN1();
}
#endif
