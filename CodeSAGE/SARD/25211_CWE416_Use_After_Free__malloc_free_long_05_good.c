#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5L;
 }
 }
 free(VAR2);
 }
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5L;
 }
 }
 free(VAR2);
 }
 if(VAR3)
 {
 ;
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5L;
 }
 }
 }
 if(VAR3)
 {
 FUN5(VAR2[0]);
 }
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5L;
 }
 }
 }
 if(VAR3)
 {
 FUN5(VAR2[0]);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
