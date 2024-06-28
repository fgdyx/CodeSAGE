#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 {
 int64_t VAR6 = 5LL;
 VAR3 = &VAR6;
 }
 FUN3(VAR3);
}
void FUN4(VAR2 * VAR3);
static void FUN5()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR7;
 VAR3 = NULL;
 FUN3(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
