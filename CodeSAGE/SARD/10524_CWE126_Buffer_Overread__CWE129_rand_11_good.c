#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = FUN3();
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN6(VAR3[VAR2]);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = FUN3();
 }
 if(FUN2())
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN6(VAR3[VAR2]);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = -1;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN6(VAR3[VAR2]);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
static void FUN9()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN6(VAR3[VAR2]);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
