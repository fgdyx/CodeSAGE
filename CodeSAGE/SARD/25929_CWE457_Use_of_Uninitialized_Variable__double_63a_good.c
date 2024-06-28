#ifndef VAR1
void FUN1(double * VAR2);
static void FUN2()
{
 double VAR2;
 VAR2 = 5.0;
 FUN1(&VAR2);
}
void FUN3(double * VAR2);
static void FUN4()
{
 double VAR2;
 ;
 FUN3(&VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
