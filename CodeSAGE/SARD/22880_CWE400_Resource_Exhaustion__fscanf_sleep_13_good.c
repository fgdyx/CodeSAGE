#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN3(VAR2);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN3(VAR2);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 FUN3(VAR2);
 FUN2("");
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 FUN3(VAR2);
 FUN2("");
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
