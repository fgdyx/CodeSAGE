#ifndef VAR1
static void FUN1()
{
 long * VAR2 = VAR3;
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)calloc(1, sizeof(long));
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
