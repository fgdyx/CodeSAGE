#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 VAR3 * VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR3 * VAR5;
 VAR4[0] = 5LL;
 FUN2(VAR4[0]);
 VAR5 = (VAR3 *)realloc(VAR4, (130000)*sizeof(VAR3));
 if (VAR5 != NULL)
 {
 VAR4 = VAR5;
 VAR4[0] = 10LL;
 FUN2(VAR4[0]);
 }
 free(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
