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
 VAR2 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
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
