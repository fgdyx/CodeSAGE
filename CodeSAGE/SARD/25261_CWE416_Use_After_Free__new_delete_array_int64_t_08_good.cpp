#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5LL;
 }
 }
 delete [] VAR3;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 ;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5LL;
 }
 }
 delete [] VAR3;
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5LL;
 }
 }
 }
 if(FUN2())
 {
 FUN7(VAR3[0]);
 }
}
static void FUN8()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5LL;
 }
 }
 }
 if(FUN2())
 {
 FUN7(VAR3[0]);
 }
}
void FUN9()
{
 FUN1();
 FUN5();
 FUN6();
 FUN8();
}
#endif
