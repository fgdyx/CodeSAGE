#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7==5)
 {
 VAR2 = VAR3;
 }
 if(VAR7!=5)
 {
 FUN3("");
 }
 else
 {
 {
 VAR4 * VAR8 = new(VAR2) VAR4;
 VAR8->VAR9 = 5;
 FUN4(VAR8->VAR9);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7==5)
 {
 VAR2 = VAR3;
 }
 if(VAR7==5)
 {
 {
 VAR4 * VAR8 = new(VAR2) VAR4;
 VAR8->VAR9 = 5;
 FUN4(VAR8->VAR9);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR5;
 }
 if(VAR7==5)
 {
 {
 VAR6 * VAR10 = new(VAR2) VAR6;
 VAR10->VAR9 = 5;
 classTwo->intTwo = 10;
 VAR10->VAR11 = 10;
 FUN4(VAR10->VAR9);
 }
 }
}
static void FUN7()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(VAR7==5)
 {
 VAR2 = VAR5;
 }
 if(VAR7==5)
 {
 {
 VAR6 * VAR10 = new(VAR2) VAR6;
 classTwo->intTwo = 10;
 VAR10->VAR9 = 5;
 VAR10->VAR11 = 10;
 FUN4(VAR10->VAR9);
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
