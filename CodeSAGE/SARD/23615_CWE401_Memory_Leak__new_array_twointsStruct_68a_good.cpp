#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 twoIntsStruct VAR4[100];
 VAR3 = VAR4;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN4(&VAR3[0]);
 VAR7 = VAR3;
 FUN1();
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN4(&VAR3[0]);
 VAR8 = VAR3;
 FUN2();
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
