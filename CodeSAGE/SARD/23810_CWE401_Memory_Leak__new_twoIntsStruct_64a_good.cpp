#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 twoIntsStruct VAR5;
 VAR4 = &VAR5;
 VAR4->VAR6 = 0;
 VAR4->VAR7 = 0;
 FUN3(VAR4);
 FUN1(&VAR4);
}
void FUN4(void * VAR2);
static void FUN5()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = new VAR3;
 VAR4->VAR6 = 0;
 VAR4->VAR7 = 0;
 FUN3(VAR4);
 FUN4(&VAR4);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
