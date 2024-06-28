#ifndef VAR1
void FUN1(unsigned int VAR2[]);
static void FUN2()
{
 unsigned int VAR3;
 unsigned int VAR2[5];
 VAR3 = 0;
 VAR3 = -2;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(unsigned int VAR2[]);
static void FUN4()
{
 unsigned int VAR3;
 unsigned int VAR2[5];
 VAR3 = 0;
 VAR3 = (unsigned int)FUN5();
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
