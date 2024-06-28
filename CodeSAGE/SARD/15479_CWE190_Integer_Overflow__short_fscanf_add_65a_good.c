#ifndef VAR1
void FUN1(short VAR2);
static void FUN2()
{
 short VAR2;
 void (*VAR3) (short) = VAR4;
 VAR2 = 0;
 VAR2 = 2;
 FUN3(VAR2);
}
void FUN4(short VAR2);
static void FUN5()
{
 short VAR2;
 void (*VAR3) (short) = VAR5;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
