#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 else
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 if(FUN2())
 {
 free(VAR2);
 }
 else
 {
 free(VAR2);
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new long;
 }
 else
 {
 VAR2 = new long;
 }
 if(FUN2())
 {
 delete VAR2;
 }
 else
 {
 delete VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
