#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 return VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
void FUN4()
{
 FUN2();
}
#endif
