#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
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
 if (VAR2 < VAR3)
 {
 char VAR4 = VAR2 + 1;
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
 char VAR2;
 VAR2 = '';
 if(1)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(1)
 {
 if (VAR2 < VAR3)
 {
 char VAR4 = VAR2 + 1;
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
 char VAR2;
 VAR2 = '';
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
 char VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 }
}
static void FUN6()
{
 char VAR2;
 VAR2 = '';
 if(1)
 {
 VAR2 = 2;
 }
 if(1)
 {
 {
 char VAR4 = VAR2 + 1;
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
