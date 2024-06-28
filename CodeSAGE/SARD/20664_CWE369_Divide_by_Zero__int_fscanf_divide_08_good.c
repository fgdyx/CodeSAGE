#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if( VAR2 != 0 )
 {
 FUN5(100 / VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 if( VAR2 != 0 )
 {
 FUN5(100 / VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 FUN5(100 / VAR2);
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 FUN5(100 / VAR2);
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
