#ifndef VAR1
static void FUN1(int64_t VAR2)
{
 if(VAR2 > 0)
 {
 int64_t VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int64_t VAR2;
 void (*VAR4) (VAR5) = VAR6;
 VAR2 = 0LL;
 VAR2 = 2;
 FUN4(VAR2);
}
static void FUN5(int64_t VAR2)
{
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR7/2))
 {
 int64_t VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
}
static void FUN7()
{
 int64_t VAR2;
 void (*VAR4) (VAR5) = VAR8;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 FUN4(VAR2);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
