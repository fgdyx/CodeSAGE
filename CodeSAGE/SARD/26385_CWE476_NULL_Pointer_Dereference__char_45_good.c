#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 FUN2(VAR2[0]);
}
static void FUN3()
{
 char * VAR2;
 VAR2 = "";
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 char * VAR2 = VAR4;
 if (VAR2 != NULL)
 {
 FUN2(VAR2[0]);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 VAR4 = VAR2;
 FUN4();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
