#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = new VAR3;
 FUN1(&VAR4);
}
void FUN3(void * VAR2);
static void FUN4()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = (VAR3 *)calloc(100, sizeof(VAR3));
 FUN3(&VAR4);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
