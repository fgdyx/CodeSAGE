#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (int *)FUN3(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 memmove(VAR2, VAR4, 10*sizeof(int));
 FUN4(VAR2[0]);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)FUN3(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 memmove(VAR2, VAR4, 10*sizeof(int));
 FUN4(VAR2[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
