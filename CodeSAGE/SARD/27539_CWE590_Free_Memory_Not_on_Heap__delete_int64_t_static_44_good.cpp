#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(*VAR3);
 delete VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 VAR2 * VAR6 = new VAR2;
 *VAR6 = 5LL;
 VAR3 = VAR6;
 }
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
