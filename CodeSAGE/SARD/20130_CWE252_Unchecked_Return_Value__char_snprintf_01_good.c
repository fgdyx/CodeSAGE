#ifndef VAR1
static void FUN1()
{
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN2(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
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
