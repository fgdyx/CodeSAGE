#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 delete [] VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 FUN3(VAR3);
}
static void FUN4(VAR2 * VAR3)
{
 free(VAR3);
}
static void FUN5()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR6;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 FUN3(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
