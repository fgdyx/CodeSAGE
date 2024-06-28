#ifndef VAR1
void FUN1(unsigned int VAR2);
static void FUN2()
{
 unsigned int VAR2;
 void (*VAR3) (unsigned int) = VAR4;
 VAR2 = 0;
 VAR2 = 2;
 FUN3(VAR2);
}
void FUN4(unsigned int VAR2);
static void FUN5()
{
 unsigned int VAR2;
 void (*VAR3) (unsigned int) = VAR5;
 VAR2 = 0;
 VAR2 = VAR6;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
