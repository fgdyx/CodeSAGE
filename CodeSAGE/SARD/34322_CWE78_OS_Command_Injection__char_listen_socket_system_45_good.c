#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR4[100] = VAR5;
 VAR2 = VAR4;
 strcat(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
void FUN6()
{
 FUN5();
}
#endif
