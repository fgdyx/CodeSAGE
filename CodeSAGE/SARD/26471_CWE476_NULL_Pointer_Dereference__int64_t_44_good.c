#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(*VAR3);
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 {
 int64_t VAR6 = 5LL;
 VAR3 = &VAR6;
 }
 FUN4(VAR3);
}
static void FUN5(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 FUN2(*VAR3);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR7;
 VAR3 = NULL;
 FUN4(VAR3);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
