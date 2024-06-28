#ifndef VAR1
void FUN1(short VAR2[]);
static void FUN2()
{
 short VAR3;
 short VAR2[5];
 VAR3 = 0;
 VAR3 = 2;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(short VAR2[]);
static void FUN4()
{
 short VAR3;
 short VAR2[5];
 VAR3 = 0;
 VAR3 = VAR4;
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
