#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(1)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR3))
 {
 int64_t VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(1)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(1)
 {
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR3))
 {
 int64_t VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN7()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 2;
 }
 if(1)
 {
 {
 int64_t VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 }
}
static void FUN8()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(1)
 {
 VAR2 = 2;
 }
 if(1)
 {
 {
 int64_t VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
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
