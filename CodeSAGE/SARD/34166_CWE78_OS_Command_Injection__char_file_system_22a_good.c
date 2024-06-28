#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
char * FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 char VAR5[100] = VAR6;
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 if (FUN3(VAR4) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
char * FUN6(char * VAR4);
static void FUN7()
{
 char * VAR4;
 char VAR5[100] = VAR6;
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 if (FUN3(VAR4) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
