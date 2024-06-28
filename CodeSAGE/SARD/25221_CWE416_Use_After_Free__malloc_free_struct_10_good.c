#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 free(VAR3);
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
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5].VAR6 = 1;
 VAR3[VAR5].VAR7 = 2;
 }
 }
 free(VAR3);
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
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
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
 FUN5(&VAR3[0]);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
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
 FUN5(&VAR3[0]);
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
