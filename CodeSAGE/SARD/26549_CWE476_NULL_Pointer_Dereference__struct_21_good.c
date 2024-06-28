#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(VAR5 * VAR6)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR6 != NULL)
 {
 FUN3(VAR6->VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR2 = 0;
 FUN1(VAR6);
}
static void FUN5(VAR5 * VAR6)
{
 if(VAR3)
 {
 if (VAR6 != NULL)
 {
 FUN3(VAR6->VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR3 = 1;
 FUN5(VAR6);
}
static void FUN7(VAR5 * VAR6)
{
 if(VAR4)
 {
 FUN3(VAR6->VAR7);
 }
}
static void FUN8()
{
 VAR5 * VAR6;
 {
 twoIntsStruct VAR8;
 VAR8.VAR7 = 0;
 VAR8.VAR9 = 0;
 VAR6 = &VAR8;
 }
 VAR4 = 1;
 FUN7(VAR6);
}
void FUN9()
{
 FUN4();
 FUN6();
 FUN8();
}
#endif
