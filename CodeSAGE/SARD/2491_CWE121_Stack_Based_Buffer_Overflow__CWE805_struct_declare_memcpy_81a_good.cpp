#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 VAR3 = VAR5;
 const VAR6& VAR7 = FUN2();
 VAR7.FUN3(VAR3);
}
void FUN4()
{
 FUN1();
}
#endif
