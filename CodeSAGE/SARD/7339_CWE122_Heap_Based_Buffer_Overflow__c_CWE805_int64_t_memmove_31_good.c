#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 VAR2 * VAR4 = VAR3;
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR5[100] = {0};
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
