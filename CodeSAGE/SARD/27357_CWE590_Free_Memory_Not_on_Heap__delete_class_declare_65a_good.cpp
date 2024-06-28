#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 VAR2 * VAR6 = new VAR2;
 VAR6->VAR7 = 2;
 VAR6->VAR8 = 2;
 VAR3 = VAR6;
 }
 FUN3(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
