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
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 {
 int VAR4[100] = {0};
 memcpy(VAR2, VAR4, 100*sizeof(int));
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 {
 int VAR4[100] = {0};
 memcpy(VAR2, VAR4, 100*sizeof(int));
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
