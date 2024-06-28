#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN4(VAR2[0]);
 free(VAR2);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 VAR2 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN4(VAR2[0]);
 free(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
