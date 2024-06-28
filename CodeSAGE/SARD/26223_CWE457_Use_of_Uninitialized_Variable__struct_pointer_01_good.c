#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN2(VAR3->VAR4);
 FUN2(VAR3->VAR5);
}
static void FUN3()
{
 VAR2 * VAR3;
 ;
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
 FUN2(VAR3->VAR4);
 FUN2(VAR3->VAR5);
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
