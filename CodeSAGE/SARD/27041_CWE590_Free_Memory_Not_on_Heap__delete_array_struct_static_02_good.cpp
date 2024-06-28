#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 VAR2 * VAR4 = new VAR2[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 1;
 }
 }
 VAR3 = VAR4;
 }
 }
 FUN3(&VAR3[0]);
 delete [] VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 {
 VAR2 * VAR4 = new VAR2[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 1;
 }
 }
 VAR3 = VAR4;
 }
 }
 FUN3(&VAR3[0]);
 delete [] VAR3;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
