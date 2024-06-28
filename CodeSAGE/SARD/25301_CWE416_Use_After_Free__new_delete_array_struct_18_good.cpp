#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 delete [] VAR3;
 goto VAR8;
VAR8:
 ;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 goto VAR8;
VAR8:
 FUN3(&VAR3[0]);
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
