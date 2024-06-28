#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 {
 VAR2 * VAR5 = new VAR2[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR3 = VAR5;
 }
 }
 FUN3(&VAR3[0]);
 delete [] VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR9)
 {
 {
 VAR2 * VAR5 = new VAR2[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR3 = VAR5;
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
