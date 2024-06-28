#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
