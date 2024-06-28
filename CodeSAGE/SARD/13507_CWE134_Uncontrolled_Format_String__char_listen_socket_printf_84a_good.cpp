#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR4 * VAR5 = new FUN2(VAR2);
 delete VAR5;
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR6 * VAR7 = new FUN4(VAR2);
 delete VAR7;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
