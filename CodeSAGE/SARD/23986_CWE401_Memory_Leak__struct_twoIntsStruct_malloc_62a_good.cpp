#ifndef VAR1
void FUN1(struct VAR2 * &VAR3);
static void FUN2()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 ;
}
void FUN3(struct VAR2 * &VAR3);
static void FUN4()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 FUN3(VAR3);
 free(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
