#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 if (!FUN2(VAR2))
 {
 FUN3("");
 FUN4(1);
 }
}
void FUN5()
{
 FUN1();
}
#endif
