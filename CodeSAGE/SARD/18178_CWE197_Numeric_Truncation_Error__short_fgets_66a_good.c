#ifndef VAR1
void FUN1(short VAR2[]);
static void FUN2()
{
 short VAR3;
 short VAR2[5];
 VAR3 = -1;
 VAR3 = VAR4-5;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
