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
 VAR2 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 VAR2 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
