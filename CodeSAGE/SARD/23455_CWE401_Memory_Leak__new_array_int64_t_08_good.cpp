#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 delete[] VAR3;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 delete[] VAR3;
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 int64_t VAR4[100];
 VAR3 = VAR4;
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN8()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 int64_t VAR4[100];
 VAR3 = VAR4;
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 ;
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
