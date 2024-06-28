#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (int *)FUN3(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN4(VAR2[0]);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 VAR2 = (int *)FUN3(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN4(VAR2[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
