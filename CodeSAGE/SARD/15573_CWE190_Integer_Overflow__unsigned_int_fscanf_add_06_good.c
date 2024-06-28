#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 < VAR4)
 {
 unsigned int VAR5 = VAR2 + 1;
 FUN3(VAR5);
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
 if(VAR3==5)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 if (VAR2 < VAR4)
 {
 unsigned int VAR5 = VAR2 + 1;
 FUN3(VAR5);
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
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 2;
 }
 if(VAR3==5)
 {
 {
 unsigned int VAR5 = VAR2 + 1;
 FUN3(VAR5);
 }
 }
}
static void FUN6()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = 2;
 }
 if(VAR3==5)
 {
 {
 unsigned int VAR5 = VAR2 + 1;
 FUN3(VAR5);
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
