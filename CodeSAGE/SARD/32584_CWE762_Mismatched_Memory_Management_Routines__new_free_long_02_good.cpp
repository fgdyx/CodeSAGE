#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long;
 }
 if(1)
 {
 delete VAR2;
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 if(1)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 if(1)
 {
 free(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
