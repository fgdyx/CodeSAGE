#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = new VAR2[100];
 return VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 delete [] VAR3;
}
static VAR2 * FUN3(VAR2 * VAR3)
{
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 return VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN3(VAR3);
 free(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
