#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long[100];
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 delete [] VAR2;
 }
 if(0)
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
 if(1)
 {
 VAR2 = new long[100];
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 delete [] VAR2;
 }
 if(1)
 {
 ;
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
 VAR2 = new long[100];
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 }
 if(1)
 {
 FUN5(VAR2[0]);
 }
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long[100];
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 }
 if(1)
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
