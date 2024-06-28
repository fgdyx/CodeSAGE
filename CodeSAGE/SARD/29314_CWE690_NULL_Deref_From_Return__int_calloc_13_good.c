#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(1, sizeof(int));
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(1, sizeof(int));
 if(VAR3==5)
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
