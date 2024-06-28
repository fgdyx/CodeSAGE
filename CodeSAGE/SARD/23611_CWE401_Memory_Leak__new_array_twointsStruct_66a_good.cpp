#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
static void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 twoIntsStruct VAR5[100];
 VAR4 = VAR5;
 VAR4[0].VAR6 = 0;
 VAR4[0].VAR7 = 0;
 FUN3(&VAR4[0]);
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN4(VAR2 * VAR3[]);
static void FUN5()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 VAR4 = new VAR2[100];
 VAR4[0].VAR6 = 0;
 VAR4[0].VAR7 = 0;
 FUN3(&VAR4[0]);
 VAR3[2] = VAR4;
 FUN4(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
