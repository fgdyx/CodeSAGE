#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = VAR4;
 }
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR4))
 {
 short VAR6 = VAR2 * VAR2;
 FUN5(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = VAR4;
 }
 if(VAR3)
 {
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR4))
 {
 short VAR6 = VAR2 * VAR2;
 FUN5(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN7()
{
 short VAR2;
 VAR2 = 0;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 2;
 }
 if(VAR3)
 {
 {
 short VAR6 = VAR2 * VAR2;
 FUN5(VAR6);
 }
 }
}
static void FUN8()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = 2;
 }
 if(VAR3)
 {
 {
 short VAR6 = VAR2 * VAR2;
 FUN5(VAR6);
 }
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
