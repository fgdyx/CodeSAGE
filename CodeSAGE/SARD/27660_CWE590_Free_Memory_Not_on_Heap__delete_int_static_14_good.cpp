#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int * VAR4 = new int;
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 int * VAR4 = new int;
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
