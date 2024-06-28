#ifndef VAR1
static void FUN1(long * &VAR2)
{
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
