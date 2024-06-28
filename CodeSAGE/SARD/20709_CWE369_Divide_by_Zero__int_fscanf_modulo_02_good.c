#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 if( VAR2 != 0 )
 {
 FUN3(100 % VAR2);
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
 if(1)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(1)
 {
 if( VAR2 != 0 )
 {
 FUN3(100 % VAR2);
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
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 7;
 }
 if(1)
 {
 FUN3(100 % VAR2);
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = 7;
 }
 if(1)
 {
 FUN3(100 % VAR2);
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
