#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(VAR5 * VAR6)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 delete[] VAR6;
 }
}
static void FUN3()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new VAR5[100];
 VAR6[0] = 5LL;
 FUN4(VAR6[0]);
 VAR2 = 0;
 FUN1(VAR6);
}
static void FUN5(VAR5 * VAR6)
{
 if(VAR3)
 {
 delete[] VAR6;
 }
}
static void FUN6()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new VAR5[100];
 VAR6[0] = 5LL;
 FUN4(VAR6[0]);
 VAR3 = 1;
 FUN5(VAR6);
}
static void FUN7(VAR5 * VAR6)
{
 if(VAR4)
 {
 ;
 }
}
static void FUN8()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 int64_t VAR7[100];
 VAR6 = VAR7;
 VAR6[0] = 5LL;
 FUN4(VAR6[0]);
 VAR4 = 1;
 FUN7(VAR6);
}
void FUN9()
{
 FUN3();
 FUN6();
 FUN8();
}
#endif
