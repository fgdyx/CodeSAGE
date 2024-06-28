#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(1*sizeof(long));
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(1*sizeof(long));
 if(VAR3==5)
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
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
