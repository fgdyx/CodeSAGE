#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 delete [] VAR3;
 }
 if(VAR8)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 delete [] VAR3;
 }
 if(VAR4)
 {
 ;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR8)
 {
 FUN2("");
 }
 else
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 }
 if(VAR4)
 {
 FUN5(VAR3[0].VAR6);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 }
 if(VAR4)
 {
 FUN5(VAR3[0].VAR6);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
