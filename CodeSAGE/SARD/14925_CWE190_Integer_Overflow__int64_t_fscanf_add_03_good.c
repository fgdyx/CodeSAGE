#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(5==5)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 < VAR3)
 {
 int64_t VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(5==5)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(5==5)
 {
 if (VAR2 < VAR3)
 {
 int64_t VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 2;
 }
 if(5==5)
 {
 {
 int64_t VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 }
}
static void FUN6()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(5==5)
 {
 VAR2 = 2;
 }
 if(5==5)
 {
 {
 int64_t VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
