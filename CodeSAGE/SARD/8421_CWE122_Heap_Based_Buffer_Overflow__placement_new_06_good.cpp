#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(VAR7==5)
 {
 VAR2 = VAR3;
 }
 if(VAR7!=5)
 {
 FUN2("");
 }
 else
 {
 {
 VAR4 * VAR8 = new(VAR2) VAR4;
 VAR8->VAR9 = 5;
 FUN3(VAR8->VAR9);
 free(VAR2);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(VAR7==5)
 {
 VAR2 = VAR3;
 }
 if(VAR7==5)
 {
 {
 VAR4 * VAR8 = new(VAR2) VAR4;
 VAR8->VAR9 = 5;
 FUN3(VAR8->VAR9);
 free(VAR2);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(VAR7!=5)
 {
 FUN2("");
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
 FUN3(VAR10->VAR9);
 free(VAR2);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
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
 FUN3(VAR10->VAR9);
 free(VAR2);
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
