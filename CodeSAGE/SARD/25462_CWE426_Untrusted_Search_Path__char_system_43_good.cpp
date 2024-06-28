#ifndef VAR1
static void FUN1(char * &VAR2)
{
 strcpy(VAR2, VAR3);
}
static void FUN2()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 FUN1(VAR2);
 if (FUN3(VAR2) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
void FUN6()
{
 FUN2();
}
#endif
