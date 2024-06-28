#ifndef VAR1
static void FUN1()
{
 int VAR2;
 long * VAR3;
 VAR3 = NULL;
 VAR3 = (long *)calloc(1, sizeof(long));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 if (VAR3 != NULL)
 {
 VAR3[0] = 5L;
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
