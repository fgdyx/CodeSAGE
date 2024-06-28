#ifndef VAR1
static void FUN1(char * VAR2)
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
 void (*VAR3) (char *) = VAR4;
 char VAR5[100] = VAR6;
 VAR2 = VAR5;
 strcat(VAR2, "");
 FUN6(VAR2);
}
void FUN7()
{
 FUN5();
}
#endif
