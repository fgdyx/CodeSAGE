#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 FUN2(*VAR2);
}
static void FUN3()
{
 int * VAR2;
 {
 int VAR4 = 5;
 VAR2 = &VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int * VAR2 = VAR5;
 if (VAR2 != NULL)
 {
 FUN2(*VAR2);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 VAR5 = VAR2;
 FUN4();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
