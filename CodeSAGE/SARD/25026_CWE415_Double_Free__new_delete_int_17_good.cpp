#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new int;
 delete VAR4;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 ;
 }
}
static void FUN2()
{
 int VAR5,VAR6;
 int * VAR4;
 VAR4 = NULL;
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 VAR4 = new int;
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 delete VAR4;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
