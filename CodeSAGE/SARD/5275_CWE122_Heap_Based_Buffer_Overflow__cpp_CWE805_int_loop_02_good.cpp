#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new int[100];
 }
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 delete [] VAR2;
 }
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new int[100];
 }
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 delete [] VAR2;
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
