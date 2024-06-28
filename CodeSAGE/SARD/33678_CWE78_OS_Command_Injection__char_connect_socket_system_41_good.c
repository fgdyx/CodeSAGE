#ifndef VAR1
void FUN1(char * VAR2)
{
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = VAR4;
 VAR2 = VAR3;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN6()
{
 FUN5();
}
#endif
