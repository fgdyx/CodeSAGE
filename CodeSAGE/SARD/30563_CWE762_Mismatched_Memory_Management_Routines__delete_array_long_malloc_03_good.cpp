#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 if(5!=5)
 {
 FUN2("");
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
 if(5==5)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 }
 if(5==5)
 {
 free(VAR2);
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new long[100];
 }
 if(5==5)
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = new long[100];
 }
 if(5==5)
 {
 delete [] VAR2;
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
