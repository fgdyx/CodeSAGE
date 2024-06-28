#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
static void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 twoIntsStruct VAR5[50];
 twoIntsStruct VAR6[100];
 VAR4 = VAR6;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
