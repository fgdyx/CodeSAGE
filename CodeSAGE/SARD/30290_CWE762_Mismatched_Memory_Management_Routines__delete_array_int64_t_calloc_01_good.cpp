#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 delete [] VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 free(VAR3);
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
