#ifndef VAR1
static long * FUN1(long * VAR2)
{
 VAR2 = (long *)malloc(1*sizeof(long));
 return VAR2;
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
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
