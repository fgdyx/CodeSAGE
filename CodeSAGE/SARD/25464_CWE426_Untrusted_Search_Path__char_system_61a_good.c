#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
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
