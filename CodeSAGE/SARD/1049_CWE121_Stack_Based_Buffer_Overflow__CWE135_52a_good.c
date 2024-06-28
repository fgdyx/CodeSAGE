#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 void * VAR2;
 VAR2 = NULL;
 VAR2 = (void *)VAR3;
 FUN1(VAR2);
}
void FUN3(void * VAR2);
static void FUN4()
{
 void * VAR2;
 VAR2 = NULL;
 VAR2 = (void *)VAR4;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
