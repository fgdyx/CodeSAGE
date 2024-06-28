#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new long[100];
 break;
 }
 while(1)
 {
 delete [] VAR2;
 break;
 }
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 break;
 }
 while(1)
 {
 free(VAR2);
 break;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
