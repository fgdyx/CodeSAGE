#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 twoIntsStruct VAR6[50];
 twoIntsStruct VAR7[100];
 VAR3 = VAR7;
 FUN3(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
