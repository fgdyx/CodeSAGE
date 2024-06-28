#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int FUN1(int VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = VAR5-5;
 }
 return VAR4;
}
static void FUN3()
{
 int VAR4;
 VAR4 = -1;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 short VAR6 = (short)VAR4;
 FUN4(VAR6);
 }
}
static int FUN5(int VAR4)
{
 if(VAR3)
 {
 VAR4 = VAR5-5;
 }
 return VAR4;
}
static void FUN6()
{
 int VAR4;
 VAR4 = -1;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 short VAR6 = (short)VAR4;
 FUN4(VAR6);
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
