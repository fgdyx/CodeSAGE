#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 {
 int * VAR5 = new int;
 *VAR5 = 5;
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
