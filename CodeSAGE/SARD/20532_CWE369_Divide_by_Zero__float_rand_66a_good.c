#ifndef VAR1
void FUN1(float VAR2[]);
static void FUN2()
{
 float VAR3;
 float VAR2[5];
 VAR3 = 0.0F;
 VAR3 = 2.0F;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(float VAR2[]);
static void FUN4()
{
 float VAR3;
 float VAR2[5];
 VAR3 = 0.0F;
 VAR3 = (float)FUN5();
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
