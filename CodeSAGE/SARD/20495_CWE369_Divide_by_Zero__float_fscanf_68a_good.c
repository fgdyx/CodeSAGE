#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 float VAR2;
 VAR2 = 0.0F;
 fscanf (stdin, "", &VAR2);
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
