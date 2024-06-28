#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 return VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 {
 int64_t VAR4[100] = {0};
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
void FUN4()
{
 FUN2();
}
#endif
