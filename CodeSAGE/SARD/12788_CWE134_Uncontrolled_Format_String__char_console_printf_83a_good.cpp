#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR4 FUN2(VAR2);
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR5 FUN4(VAR2);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
