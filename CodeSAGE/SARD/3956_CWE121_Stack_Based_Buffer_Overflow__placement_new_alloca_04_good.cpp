#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7)
 {
 VAR2 = VAR3;
 }
 if(VAR8)
 {
 FUN3("");
 }
 else
 {
 {
 VAR4 * VAR9 = new(VAR2) VAR4;
 VAR9->VAR10 = 5;
 FUN4(VAR9->VAR10);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7)
 {
 VAR2 = VAR3;
 }
 if(VAR7)
 {
 {
 VAR4 * VAR9 = new(VAR2) VAR4;
 VAR9->VAR10 = 5;
 FUN4(VAR9->VAR10);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR8)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR5;
 }
 if(VAR7)
 {
 {
 VAR6 * VAR11 = new(VAR2) VAR6;
 VAR11->VAR10 = 5;
 classTwo->intTwo = 10;
 VAR11->VAR12 = 10;
 FUN4(VAR11->VAR10);
 }
 }
}
static void FUN7()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7)
 {
 VAR2 = VAR5;
 }
 if(VAR7)
 {
 {
 VAR6 * VAR11 = new(VAR2) VAR6;
 classTwo->intTwo = 10;
 VAR11->VAR10 = 5;
 VAR11->VAR12 = 10;
 FUN4(VAR11->VAR10);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
