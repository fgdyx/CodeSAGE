#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
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
 if (VAR2 > 0)
 {
 unsigned int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(1)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(1)
 {
 if (VAR2 > 0)
 {
 unsigned int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = -2;
 }
 if(1)
 {
 {
 unsigned int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
 }
}
static void FUN6()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(1)
 {
 VAR2 = -2;
 }
 if(1)
 {
 {
 unsigned int VAR3 = VAR2 - 1;
 FUN3(VAR3);
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
