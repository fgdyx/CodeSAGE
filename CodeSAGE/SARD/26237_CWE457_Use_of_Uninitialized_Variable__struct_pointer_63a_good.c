#ifndef VAR1
void FUN1(VAR2 * * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN1(&VAR3);
}
void FUN3(VAR2 * * VAR3);
static void FUN4()
{
 VAR2 * VAR3;
 ;
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
